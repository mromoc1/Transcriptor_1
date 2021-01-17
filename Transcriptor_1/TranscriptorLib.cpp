#include "TranscriptorLib.h"

#include<SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>
#include "Gist.h"
#include "Digitalizacion.h"
#include "Preprocesamiento.h"
#include "RedNeuronal.h"
#include "Entrenamiento.h"
#include <fstream>
#include "Entrenamiento1.h"

using namespace std;


// TODO: Ejemplo de una función de biblioteca
namespace trs {
    
    void Transcripcion()
    {
        //dig::Inic_Digitalizacion();
        vector<double> Sample = prep::setMuestreo();
        cout << Sample.size() << endl;
        vector<double> preSample = prep::Aplicar_FFT(Sample);

        //RedNeuronal red = RedNeuronal(preSample);
        /*
        for (int i = 0; i < preSample.size()  ;i++) {
            cout << preSample[i] << endl;
        }*/


        //Caso entrenamiento


        Entrenamiento1 ent = Entrenamiento1();
        ent.setDireccionEntrenamiento("C:/Users/mromo/Desktop/dataset");
        ent.getArchivoTSV();

        
   



        


    }



}


/*
       
        // MFCCs
        const std::vector<double>& mfcc = gist.getMelFrequencyCepstralCoefficients();
  

        // Mel-frequency Spectrum
        const std::vector<double>& melSpec = gist.getMelFrequencySpectrum();
       
       std::ofstream myfile("example.txt");
        if (myfile.is_open())
        {
            for (int i = 0; i < Sample.size(); i++)
            {
                myfile << Sample[i]<<"\n";
            }
            myfile.close();
        }
        else std::cout << "Unable to open file";
        */

        /*********************************OBTENCION DE MUESTREO****************************/
        /*
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        sf::Int16 samples[1024];
        sf::Uint64 count;

        do
        {
            count = file.read(samples, 1024);

        } while (count > 0);

        float samples2[1024];
        for (int i = 0; i < 1024; i++)
        {
            std::cout <<  samples[i] << std::endl;
            samples2[i] = samples[i];
        }
        */
        /*********************************CREACION DE OBJETO PARA ANALISIS****************************/

        /*
        int frameSize = 1024;
        int sampleRate = file.getSampleRate();

        Gist<float> gist(frameSize, sampleRate);

        gist.processAudioFrame(samples2, 1024);


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


        */




        /*
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"));
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

        Gist<float> gist(frameSize, sampleRate);

        gist.processAudioFrame(samples2, 1024);


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

        */