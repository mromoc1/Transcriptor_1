#include "TranscriptorLib.h"

#include <string>
#include <vector>
#include "dirent.h"
#include <iostream>

using namespace std;

int main()
{
	//trs::Transcripcion();
	//trs::Entrenar("C:/Users/mromo/Desktop/dataset/clips");
    string direccion = "C:/Users/mromo/Desktop/dataset/clips";
    DIR* directorio;
    struct dirent* elemento;
    string elem;
    vector<string> elementos;
    if (directorio = opendir(direccion.c_str())) {
        while (elemento = readdir(directorio)) {
            elem = elemento->d_name;
            elementos.push_back(elem);
        }
    }
    for (int i = 0; i < elementos.size(); i++) {
        cout << elementos[i] << endl;
    }
}


