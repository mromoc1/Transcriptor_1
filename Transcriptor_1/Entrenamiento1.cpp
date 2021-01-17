#include "Entrenamiento1.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void Entrenamiento1::setDireccionEntrenamiento(string _dir) {
	this->direccionDataset = _dir;
}

void Entrenamiento1::setPalabra(string _palabra) {
	this->palabra = _palabra;
}

void Entrenamiento1::setNombreAudio(string _audio) {
	this->nombreaudio = _audio;
}

void Entrenamiento1::getArchivoTSV()
{
	cout << this->direccionDataset << endl;
	std::ifstream archivoTSV;
	archivoTSV.open(this->direccionDataset+"/train.tsv");
	std::string str;
	while (std::getline(archivoTSV, str, '\t'))
	{
		if (str.find(nombreaudio, 0) != string::npos)
		{
			std::getline(archivoTSV, str, '\t');
			this->setPalabra(str);
			cout << this->palabra << endl;
		}

	}
	archivoTSV.close();
}


