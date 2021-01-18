#include <iostream>
#include "RedNeuronal.h"
#include "Neurona.h"


RedNeuronal::RedNeuronal(vector<double> _sample) {
	this->sample = _sample;
}

void RedNeuronal::inicializarRed() {
	Neurona actual = Neurona(this->sample.size());
}

void RedNeuronal::setSample(vector<double> _sample) {
	this->sample = _sample;
}

void RedNeuronal::predecir() {

	//entra un segmento de x muestras que corresponde a Xt


}



