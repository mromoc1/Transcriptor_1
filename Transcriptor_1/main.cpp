#include <iostream>
#include <cstdlib>
#include "TranscriptorLib.h"
#include "Digitalizacion.h"
#include "Preprocesamiento.h"

using namespace std;

int main()
{
    //trs::Transcripcion();

    dig::Inic_Digitalizacion(); //Inicializa el modulo de digitalizacion 
    dig::InfoPista(); //Entrega informacion de la pista
    prep::setMuestreo(); // realiza el muestreo del archivo de audio y aplica las funciones de MFCC, Mel y FFT


    //La entrega comprende
    //Digitalizacion de voz a archivo formato wav
    //Que la grabacion se pueda detener antes de los 10 segundos
    //Que la grabacion se detenga luego de 10 segundos
    //Mostrar el muestreo de un fragmento de audio a modo de test
    //Mostrar el muestreo luego de los distinto procesamientos

    //Un plus es mostrar los dispositivos de tipo microfono
    //Un plus es iniciar la digitalizacion con 

}