#pragma once
#ifndef PREPROCESAMIENTO_H
#define PREPROCESAMIENTO_H

#include <iostream>

namespace prep {
	void setmuestreo();
	void Aplicar_fft();//recibe vector
	void Aplicar_MFCC();
	void Aplicar_Mel();
	//retornar el vector para mostrarlo en pantalla
	//<float> getvectormuestreo();
}



#endif //PREPROCESAMIENTO_H

