#pragma once
#ifndef PREPROCESAMIENTO_H
#define PREPROCESAMIENTO_H

#include <iostream>
#include <vector>
#include "Gist.h"


namespace prep {
	std::vector<double> setMuestreo();
	std::vector<double> Aplicar_FFT(std::vector<double> muestreo); //Transformada
	std::vector<double> Aplicar_MFCC(Gist<float> gist); //Coficientes ceptrales de mel
	std::vector<double> Aplicar_MFS(Gist<float> gist);  //Mel frecuency Spectrum


}
#endif //PREPROCESAMIENTO_H

