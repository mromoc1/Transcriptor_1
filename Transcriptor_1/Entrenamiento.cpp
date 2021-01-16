#include "Entrenamiento.h"



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
	

}