#pragma once
#ifndef DIGITALIZACION_H
#define DIGITALIZACION_H

#include<SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>
#include <time.h>


namespace dig {
	void Inic_Digitalizacion();
	void Inic_Digitalizacion(int dispositivo);
	void DispositivosDisponibles();
	void InfoPista();
}



#endif //DIGITALIZACION_H