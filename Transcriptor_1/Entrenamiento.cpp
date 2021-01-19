#include "Entrenamiento.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void Entrenamiento::setDireccionEntrenamiento(string _dir) {
	this->direccionDataset = _dir;
}

void Entrenamiento::setPalabra(string _palabra) {
	this->palabra = _palabra;
}

void Entrenamiento::setNombreAudio(string _audio) {
	this->nombreaudio = _audio;
}

void Entrenamiento::getArchivoTSV()
{

    std::ifstream archivoTSV;
    archivoTSV.open(this->direccionDataset + "/train.tsv");
    std::string str;
    
    while (std::getline(archivoTSV, str, '\t'))
    {
        if (str.find(this->nombreaudio, 0) != string::npos)
        {
            std::getline(archivoTSV, str, '\t');
            this->setPalabra(str);
        }
    }
    archivoTSV.close();
}

string Entrenamiento::getPalabra() {
    return this->palabra;
    
}

string Entrenamiento::getNombreAudio() {
    return this->nombreaudio;

}

string Entrenamiento::getDireecionDataset() {
    return this->direccionDataset;

}




