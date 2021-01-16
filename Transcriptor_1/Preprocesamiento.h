#pragma once
#ifndef PREPROCESAMIENTO_H
#define PREPROCESAMIENTO_H

#include <iostream>
#include "Gist.h"
#

namespace prep {
	void setMuestreo();
	void Aplicar_FFT(Gist<float> gist); //Transformada
	void Aplicar_MFCC(Gist<float> gist); //Coficientes ceptrales de mel
	void Aplicar_MFS(Gist<float> gist);  //Mel frecuency Spectrum


}
#endif //PREPROCESAMIENTO_H

