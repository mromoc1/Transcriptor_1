#pragma once
#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include <string> 

using namespace std;

namespace entr {
	void setPalabra(string _palabra); //para guardar la palabra que la red deberia transcribir
	string getPalabra(); //para obtener la palabra a transcribir correspondiente al audio
	void setNombreAudio(string audio); //guarda el nombre del audio
	string getNombreAudio(); //retorna el  nombre del audio
	void setDireccionEntrenamiento(string dir); //guarda la direccion de la carpeta de entrenamiento
	string getDireccionEntrenamiento(); //obtiene la direccion de la carpeta de entrenamiento
}
#endif //ENTRENAMIENTO_H