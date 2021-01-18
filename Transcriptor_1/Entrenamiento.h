#pragma once
#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include <iostream>
using namespace std;


class Entrenamiento{
public:

	string direccionDataset;
	string palabra;
	string nombreaudio;

	void setPalabra(string _palabra); //para guardar la palabra que la red deberia transcribir
	void setNombreAudio(string audio); //guarda el nombre del audio
	void setDireccionEntrenamiento(string dir); //guarda la direccion de la carpeta de entrenamiento
	void getArchivoTSV();


};

#endif //ENTRENAMIENTO_H

