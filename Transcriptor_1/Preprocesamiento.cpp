#include "Preprocesamiento.h"
#include "Gist.h"
#include<SFML/Audio.hpp>
#include <iostream>
#include <list>
#include <fftw3.h>


#include <fstream>

namespace prep {
    std::vector<double> setMuestreo() {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        sf::Int16 samples[1024];
        sf::Uint64 count;
        std::vector<double> muestreoaudio; //vector que guarda el segemento de audio completo

        muestreoaudio.clear();
        do
        {
            /*indica cada cuanto se realiza el muestreo, es decir cada 16000 muestras 
            la guarda en el vector "samples"*/
            count = file.read(samples, 1024); //cada 20 milisegundos 
            /*dado que el vector samples guarda estos 1024, debemos recorrerlo y 
            almacenarlos en una estructura de vector flotante que contendra todo 
            el contenido de audio*/
            if (count > 0) {
                for (int i = 0; i < count;i++) {
                    muestreoaudio.push_back(samples[i]);
                }
            } 
        } while (count > 0);

        

        /*EL SIGUIENTE SEGMENTO COMENTADO PERMITE VISUALIZAR 
        EL VECTOR DE MUESTRA OBTENIDO DEL ARCHIVO DE AUDIO*/
        
        /*
        for (int i = 0; i < muestreoaudio.size(); i++) {
            std::cout << muestreoaudio[i] <<std::endl;
        }
       */

        //EL SIGUIENTE SEGMENTO COMENTADO PERMITE UTILIZAR LAS FUNCIONALIDADES DEL PREPROCESAMIENTO
        
       /*
        int frameSize = muestreoaudio.size(); //Se probo con 1024
        int sampleRate = file.getSampleRate();
        Gist<double> gist(frameSize, sampleRate);
        //gist.setAudioFrameSize(muestreoaudio.size());
        gist.processAudioFrame(muestreoaudio);

        
        // FFT Magnitude Spectrum
        std::cout << "Magnitud del Espectro: " << std::endl;
        const std::vector<double>& magSpec = gist.getMagnitudeSpectrum();

        
        for (int i = 0; i < magSpec.size(); i++) {
            std::cout << magSpec[i] << " ,";
        }
        
        // MFCCs
        const std::vector<double>& mfcc = gist.getMelFrequencyCepstralCoefficients();
        for (int i = 0; i < mfcc.size(); i++) {
            std::cout << "Frecuencia de MEl con coeficientes Cepstral: " << mfcc[i] << std::endl;
        }
        
        
        // Mel-frequency Spectrum
        const std::vector<double>& melSpec = gist.getMelFrequencySpectrum();
        for (int i = 0; i < melSpec.size(); i++) {
            std::cout << "Espectro de Frecuencia de MEL: " << melSpec[i] << std::endl;
        }
        */
        return muestreoaudio;
    }

    
    std::vector<double> Aplicar_FFT(std::vector<double> muestreo) {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }

        int frameSize = muestreo.size(); //Se probo con 1024
        int sampleRate = file.getSampleRate();
        Gist<double> gist(frameSize, sampleRate);
        gist.processAudioFrame(muestreo);
        const std::vector<double>& magSpec = gist.getMagnitudeSpectrum();
        return magSpec;
    }

    

}




/*
    std::vector<double> Aplicar_MFCC(std::vector<double> muestreo) {


        const std::vector<double>& mfcc = gist.getMelFrequencyCepstralCoefficients();

        for (int i = 0; i < mfcc.size(); i++) {
            std::cout << "Frecuencia de MEl con coeficientes Cepstral: " << mfcc[i] << std::endl;
        }

        return mfcc;
    }*/
    /*
    std::vector<double> Aplicar_MFS(Gist<double> gist) {
        const std::vector<double>& melSpec = gist.getMelFrequencySpectrum();

        for (int i = 0; i < melSpec.size(); i++) {
            std::cout << "Espectro de Frecuencia de MEL: " << melSpec[i] << std::endl;
        }

        return melSpec;
    }*/






	



