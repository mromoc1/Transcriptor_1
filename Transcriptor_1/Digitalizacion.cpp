#include "Digitalizacion.h"

#include<SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>
#include <time.h>


namespace dig {

    void Inic_Digitalizacion()
    {
        std::vector<std::string> availableDevices = sf::SoundRecorder::getAvailableDevices();
        sf::Clock reloj;
        std::string inputDevice = availableDevices[0];

        sf::SoundBufferRecorder recorder;
        if (!recorder.setDevice(inputDevice))
        {
            std::cout << "No se Reconoce el dispositivo" << std::endl;

        }
        std::cout << "A continuacion empezara la grabacion, su grabacion no debe durar mas de 10 seg, \npuede parar cuando quiera dentro de lapso pulsando F8" << std::endl;
        system("pause");

        recorder.start();
        std::cout << "grabando..." << std::endl;
        for (int i = 0; i < 10+1; i++) {
            while (reloj.getElapsedTime().asMilliseconds() < 1000 && !GetAsyncKeyState(VK_F8)) {}
            reloj.restart();
        }
        system("cls");
        recorder.stop();
        const sf::SoundBuffer& buffer = recorder.getBuffer();
        buffer.saveToFile("my_record.wav");
    }

    void DispositivosDisponibles()//Muestra todos los dispositivos que existen en el sistema
    {
        std::vector<std::string> availableDevices = sf::SoundRecorder::getAvailableDevices();

        //Verifcacion de que Existe un dispositivos
        for (int i = 0; i < availableDevices.size(); i++)
        {
            std::cout << "Dispositivo " << i << ": " << availableDevices[i] << std::endl;
        }
    }

    void InfoPista()
    {
        sf::InputSoundFile file;
        if (!file.openFromFile("my_record.wav"))
        {
            std::cout << "No se encuentra el archivo dentro de la carpeta local" << std::endl;
        }
        else
        {
            //Atributos de la pista de audio
            std::cout << "duration: " << file.getDuration().asSeconds() << std::endl;
            std::cout << "channels: " << file.getChannelCount() << std::endl;// 1 = mono <> 2 = stereo
            std::cout << "sample rate: " << file.getSampleRate() << std::endl; //Frecuencia de muestreo //Muestreo por segundos --> 44.1Khz
            std::cout << "sample count: " << file.getSampleCount() << std::endl;//Cantidad de Muestro en el archivo
      
        }
    }

}


