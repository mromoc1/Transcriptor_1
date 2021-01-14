#pragma once
#ifndef PREPROCESAMIENTO_H
#define PREPROCESAMIENTO_H

#include <iostream>
#include "Gist.h"

namespace prep {
	void setMuestreo();
	void Aplicar_fft(); //Calcular transformada de fourier
	void Aplicar_MFCC(); //Calcular coficientes ceptrales de mel
	void Aplicar_MFS();  //Mel frecuency Spectrum
	void Aplicar_Mel(std::vector<float>& melSpec);
	//retornar el vector para mostrarlo en pantalla
	//<float> getvectormuestreo();
}



#endif //PREPROCESAMIENTO_H

