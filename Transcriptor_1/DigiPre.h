#pragma once
#ifndef DIGIPRE_H
#define DIGIPRE_H

#include<SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>
#include "Gist.h"


namespace dgp {
	void Inic_Digitalizacion();
	void Inic_Digitalizacion(int dispositivo);
	void DispositivosDisponibles();
	void InfoPista();

}



#endif //DIGIPRE_H