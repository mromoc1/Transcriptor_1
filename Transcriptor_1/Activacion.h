#pragma once
#ifndef ACTIVACION_H
#define ACTIVACION_H

namespace act {

	double sigmoid(double x);
	double dsigmoid(double y);
	double dtanh(double y);
	double fuc_tanh(double y);
	void softmax(double* input, size_t size); 
	
}
#endif //ACTIVACION_H