#pragma once
#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include <iostream>
using namespace std;


class Entrenamiento{
private:
	string palabra;
	string direccionDataset;
	string nombreaudio;
	void setPalabra(string _palabra);
public:
	 //para guardar la palabra que la red deberia transcribir
	void setNombreAudio(string audio); //guarda el nombre del audio
	void setDireccionEntrenamiento(string dir); //guarda la direccion de la carpeta de entrenamiento
	void getArchivoTSV();
	string  getPalabra();
	string getNombreAudio();
	string getDireecionDataset();

};

#endif //ENTRENAMIENTO_H

