#include <iostream>
#include <cstdlib>
#include "Digitalizacion.h";
#include "Preprocesamiento.h"
using namespace std;

int main()
{
    //Aqui necesitamos agregar y probar todas las funcionalidades que tendría la libreria de transcripcion.

    //seteamos los 10 segundos

    dig::Inic_Digitalizacion();
    //dig::DispositivosDisponibles();
    dig::InfoPista();
    prep::setmuestreo();

    //digitalizar iniciar y detener una grabacion generando la muectra correspondiiente al archivo grabado
    //mostrar el vector del audio del archivo grabado
    //obtener como entrada un archivo MP3 y guardar su vector de audio desde un directorio
    //setear la carpeta de entrenamiento
    //mostrar el vector del audio MP3

    //obtener el vector y pasar por los distintos opciones de la libreria de preprocesos



}



/*
    int op=0;

    while (op != 5) {
        cout << "Opcion 1: Iniciar grabacion" << endl;
        cout << "Opcion 2" << endl;
        cout << "Opcion 3" << endl;
        cout << "Opcion 4" << endl;
        cout << "Opcion 5" << endl;
        cin >> op;

        switch (op) {
        case 1:
            system("cls");
            cout << "Pulse P para detener" << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout << "opcion 2" << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            cout << "opcion 3" << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            cout << "opcion 4" << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            cout << "opcion 5" << endl;
            system("pause");
            system("cls");
            break;
        }
    }*/