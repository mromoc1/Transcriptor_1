#pragma once
#ifndef PREPROCESAMIENTO_H
#define PREPROCESAMIENTO_H

#include <iostream>

namespace prep {
	void setMuestreo();
	void setProcessAudioFrame(float vector[]);
	void Aplicar_fft(); //Calcular transformada de fourier
	void Aplicar_MFCC(); //Calcular coficientes ceptrales de mel
	void Aplicar_MFS();  //Mel frecuency Spectrum
	void Aplicar_Mel();

	//retornar el vector para mostrarlo en pantalla
	//<float> getvectormuestreo();
}



#endif //PREPROCESAMIENTO_H

