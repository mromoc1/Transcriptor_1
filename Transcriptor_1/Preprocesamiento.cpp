#include "Preprocesamiento.h"
#include "Gist.h"
#include<SFML/Audio.hpp>
#include <iostream>


namespace prep {
	void setmuestreo() {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        const int s = file.getSampleCount();

        std::cout << s << std::endl;

        sf::Int16 samples[1024];

        sf::Uint64 count;
        do
        {
            count = file.read(samples, 1024);
            // process, analyze, play, convert, or whatever
            // you want to do with the samples...
        } while (count > 0);

        float samples2[1024];
        for (int i = 0; i < 1024; i++)
        {
            std::cout << "Muestreo: " << samples[i] << std::endl;
            samples2[i] = samples[i];
        }
        int frameSize = 1024;
        int sampleRate = file.getSampleRate();
        std::cout << sampleRate<< std::endl;
        Gist<float> gist(frameSize, sampleRate);
        gist.processAudioFrame(samples2, 1024);
	}
}





	



