#include "Preprocesamiento.h"
#include<SFML/Audio.hpp>
#include <iostream>

void muestrear() {
	sf::InputSoundFile file;
	if (!file.openFromFile("my_record.wav")) {
		std::cout << "la grabacion que intenta abrir no existe" << std::endl;
	} 
	file.
}




	



