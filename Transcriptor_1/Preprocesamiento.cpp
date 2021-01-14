#include "Preprocesamiento.h"
#include<SFML/Audio.hpp>
#include <iostream>




//vector del tipo de muestreo
void obtenermuestreo() {
	sf::InputSoundFile file;
	if (!file.openFromFile("my_record.wav")) {
		std::cout << "la grabacion que intenta abrir no existe" << std::endl;
	}

	sf::Int16 samples[1024];
	sf::Uint64 count;

}




	



