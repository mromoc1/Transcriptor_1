#include "Preprocesamiento.h"
#include "Gist.h"
#include<SFML/Audio.hpp>
#include <iostream>
#include <list>


namespace prep {
	void setMuestreo() {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        sf::Int16 samples[1024];
        sf::Uint64 count;
        
        //std::list<float> lista;
        do
        {
            count = file.read(samples, 1024);

            //std::cout << i  << std::endl;
            //std::cout << count << std::endl;
           /* for (int i = 0; i < 1024; i++) //los 1024 son muestras que se sacarían del audio total
            {
                //std::cout << "Muestreo: " << samples[i] << std::endl;
                samples2[i] = samples[i];
                lista.push_front(samples2[i]);
                k++;
            }
            for (auto const& i : lista) {
                std::cout << i << "\n";
            }*/
            // process, analyze, play, convert, or whatever
            // you want to do with the samples...

        } while (count > 0);

        float samples2[1024];
        for (int i = 0; i < 1024; i++)
        {
            //std::cout << "Muestreo: " << samples[i] << std::endl;
            samples2[i] = samples[i];
        }
        int frameSize = 320;
        int sampleRate = file.getSampleRate();
        Gist<float> gist(frameSize, sampleRate);
        gist.processAudioFrame(samples2, 320);
        const std::vector<float>& melSpec = gist.getMelFrequencySpectrum();

        // Mel-frequency Spectrum
        const std::vector<float>& melSpec = gist.getMelFrequencySpectrum();

        for (int i = 0; i < melSpec.size(); i++)
        {
            std::cout << "Espectro de Frecuencia de MEL: " << melSpec[i] << std::endl;
        }

        // MFCCs
        const std::vector<float>& mfcc = gist.getMelFrequencyCepstralCoefficients();


        for (int i = 0; i < mfcc.size(); i++)
        {
            std::cout << "Frecuencia de MEl con coeficientes Cepstral: " << mfcc[i] << std::endl;
        }


        // FFT Magnitude Spectrum
        const std::vector<float>& magSpec = gist.getMagnitudeSpectrum();
        for (int i = 0; i < mfcc.size(); i++)
        {
            std::cout << "Magnitud del Espectro: " << magSpec[i] << std::endl;
        }
        
	}

}





	



