#include "digitalizacion.h"
#include<SFML/Audio.hpp>

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <vector>


int tiempograbacion;

void iniciardigitalizacion() {
    sf::SoundBufferRecorder recorder;
    sf::Clock reloj;

    recorder.start();
    std::cout << "Pulsa F8 para Deterner Grabacion" << std::endl;

    for (int i = 0; i < gettiempo();i++) {
        std::cout << i << std::endl;
        while (reloj.getElapsedTime().asMilliseconds()<1000 && !GetAsyncKeyState(VK_F8)) {}
        reloj.restart();
    }
    recorder.stop();
    const sf::SoundBuffer& buffer = recorder.getBuffer();
    std::cout << "El archivo creado grabará en WAV con el nombre de my_record.wav y será guardada en carpetas locales" << std::endl;
    buffer.saveToFile("my_record.wav");
}

void settiempo(int tiempo) {
	tiempograbacion = tiempo;
}

int gettiempo() {
	return tiempograbacion;
}


