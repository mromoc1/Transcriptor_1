#include <cstdlib>
#include "TranscriptorLib.h"
#include "Digitalizacion.h"
#include "Preprocesamiento.h"
#include "Entrenamiento.h"




#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

int main()
{
    trs::Transcripcion();
    //dig::Inic_Digitalizacion(); //Inicializa el modulo de digitalizacion 
    //dig::InfoPista(); //Entrega informacion de la pista
    //prep::setMuestreo(); // realiza el muestreo del archivo de audio y aplica las funciones de MFCC, Mel y FFT
    

	/*
	entr::setDireccionEntrenamiento("C:/Users/matut/OneDrive/Escritorio/es/train.tsv");
	entr::setNombreAudio("common_voice_es_18493456.mp3");
	entr::getArchivoTSV();


	std::cout << entr::getDireccionEntrenamiento() << std::endl;
	std::cout << entr::getNombreAudio() << std::endl;
	std::cout << entr::getPalabra() << std::endl;
	*/



	/*
	std::ifstream archivoTSV;
	archivoTSV.open("C:/Users/matut/OneDrive/Escritorio/es/train.tsv");

	std::string archMp3 = "common_voice_es_18493456.mp3";
	std::vector <std::string> infoTrans;
	std::string hola;

	std::string str;
	while (std::getline(archivoTSV, str,'\t'))
	{
		if (str.find(archMp3,0) != string::npos)
		{
			std::getline(archivoTSV, str, '\t');
			//infoTrans.push_back(str);
			hola = str;
		}
	
	}
	*/

	/*
	for (int i = 0; i < infoTrans.size(); i++)
	{
		std::cout  << infoTrans[i] << std::endl;
	}
	*/



    //La entrega comprende
    //Digitalizacion de voz a archivo formato wav
    //Que la grabacion se pueda detener antes de los 10 segundos
    //Que la grabacion se detenga luego de 10 segundos
    //Mostrar el muestreo de un fragmento de audio a modo de test
    //Mostrar el muestreo luego de los distinto procesamientos

    //Un plus es mostrar los dispositivos de tipo microfono
    //Un plus es iniciar la digitalizacion con 

}