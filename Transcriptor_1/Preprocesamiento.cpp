#include "Preprocesamiento.h"
#include "Gist.h"
#include<SFML/Audio.hpp>
#include <iostream>
#include <list>
#include <fftw3.h>


namespace prep {
    void setMuestreo() {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        sf::Int16 samples[1024];
        sf::Uint64 count;
        std::vector<float> muestreoaudio;
        muestreoaudio.begin();
        do
        {
            /*indica cada cuanto se realiza el muestreo, es decir cada 1024 muestras 
            la guarda en el vector "samples"*/
            
            count = file.read(samples, 1024);
            /*dado que el vector samples guarda estos 1024, debemos recorrerlo y 
            almacenarlos en una estructura de vector flotante que contendra todo 
            el contenido de audio*/
            if (count > 0) {
                for (int i = 0; i < count; i++) {
                    muestreoaudio.push_back(samples[i]);
                }
            } 
        } while (count > 0);

        /*EL SIGUIENTE SEGMENTO COMENTADO PERMITE VISUALIZAR 
        EL VECTOR DE MUESTRA OBTENIDO DEL ARCHIVO DE AUDIO*/
        std::cout << muestreoaudio.size() << std::endl;
        /*
        for (int i = 0; i < muestreoaudio.size(); i++) {
            std::cout << muestreoaudio[i] << ",";
        }*/

        //EL SIGUIENTE SEGMENTO COMENTADO PERMITE UTILIZAR LAS FUNCIONALIDADES DEL PREPROCESAMIENTO
        /*
        int frameSize = 1024;
        int sampleRate = file.getSampleRate();
        Gist<float> gist(frameSize, sampleRate);
        gist.setAudioFrameSize(muestreoaudio.size());
        gist.processAudioFrame(muestreoaudio);*/

        /*
        // FFT Magnitude Spectrum
        std::cout << "Magnitud del Espectro: " << std::endl;
        const std::vector<float>& magSpec = gist.getMagnitudeSpectrum();
        for (int i = 0; i < magSpec.size(); i++) {
            std::cout << magSpec[i] << "   ,   ";
        }*/

        /*
        // MFCCs
        const std::vector<float>& mfcc = gist.getMelFrequencyCepstralCoefficients();
        for (int i = 0; i < mfcc.size(); i++) {
            std::cout << "Frecuencia de MEl con coeficientes Cepstral: " << mfcc[i] << std::endl;
        }
        */

        /*
        // Mel-frequency Spectrum
        const std::vector<float>& melSpec = gist.getMelFrequencySpectrum();
        for (int i = 0; i < melSpec.size(); i++) {
            std::cout << "Espectro de Frecuencia de MEL: " << melSpec[i] << std::endl;
        }
        */
    }

    void Aplicar_MFCC(Gist<float> gist) {
        const std::vector<float>& mfcc = gist.getMelFrequencyCepstralCoefficients();
        for (int i = 0; i < mfcc.size(); i++) {
            std::cout << "Frecuencia de MEl con coeficientes Cepstral: " << mfcc[i] << std::endl;
        }
    }

    void Aplicar_MFS(Gist<float> gist) {
        const std::vector<float>& melSpec = gist.getMelFrequencySpectrum();
        for (int i = 0; i < melSpec.size(); i++) {
            std::cout << "Espectro de Frecuencia de MEL: " << melSpec[i] << std::endl;
        }
    }

    void Aplicar_FFT(Gist<float> gist) {
        const std::vector<float>& magSpec = gist.getMagnitudeSpectrum();
        for (int i = 0; i < magSpec.size(); i++) {
            std::cout << "Magnitud del Espectro: " << magSpec[i] << std::endl;
        }
    }


}





	



