#include "Entrenamiento.h"

#include <iostream>
#include <string>
#include <fstream>


string palabratranscribir;
string nombreaudio;
string direccioncarpetaentrenamiento;

namespace entr {
	/*guarda la palabra a transcribir*/
	void setPalabra(string _palabra) {
		palabratranscribir = _palabra;
	}

	/*retorna la palabra a transcribir*/
	string getPalabra() {
		return palabratranscribir;
	}

	/*guarda el nombre del audio*/
	void setNombreAudio(string audio) {
		nombreaudio = audio;
	}

	/*retorna el  nombre del audio*/
	string getNombreAudio() {
		return nombreaudio;
	}

	/*guarda la direccion de la carpeta de entrenamiento*/
	void setDireccionEntrenamiento(string dir) {
		direccioncarpetaentrenamiento = dir;
	}

	/*obtiene la direccion de la carpeta de entrenamiento*/
	string getDireccionEntrenamiento() {
		return direccioncarpetaentrenamiento;
	}

	
	void getArchivoTSV()
	{

		std::ifstream archivoTSV;
		archivoTSV.open("C:/Users/matut/OneDrive/Escritorio/es/train.tsv");
		std::string str;
		while (std::getline(archivoTSV, str,'\t'))
		{
			if (str.find(nombreaudio,0) != string::npos)
			{
				std::getline(archivoTSV, str, '\t');

				entr::setPalabra(str);
			}

		}


	archivoTSV.close();
	}
	
}