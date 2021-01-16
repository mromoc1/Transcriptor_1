#include "Activacion.h"
#include <stdio.h>
#include <math.h>
#include <assert.h>

namespace act{

	/*funcion de activacion sigmoide*/
	double sigmoid(double x) {
		return 1.0 / (1.0 + exp(-x));
	}

	/*derivada de la funcion sigmoide, "y" es el valor de la funcion de activacion*/
	double dsigmoid(double y){
		return y * (1.0 - y);
	}

	/*derivada de la funcion tanh, "y" es el valor de tanh*/
	double dtanh(double y) {
		y = tanh(y);
		return 1.0 - y * y;
	}

	double fuc_tanh(double y) {
		return tanh(y);
	}

	void softmax(double* input, size_t size) {

		assert(0 <= size <= sizeof(input) / sizeof(double));

		int i;
		double m, sum, constant;

		m = -INFINITY;
		for (i = 0; i < size; ++i) {
			if (m < input[i]) {
				m = input[i];
			}
		}
		sum = 0.0;
		for (i = 0; i < size; ++i) {
			sum += exp(input[i] - m);
		}
		constant = m + log(sum);
		for (i = 0; i < size; ++i) {
			input[i] = exp(input[i] - constant);
		}
	}
}