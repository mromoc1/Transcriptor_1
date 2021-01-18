#pragma once
#ifndef REDNEURONAL_H
#define REDNEURONAL_H

#include <vector>

using namespace std;


class RedNeuronal
{
public:

	vector<double> sample;

	void puertaOlvido(vector<double> _Xt, vector<double> _Ht, vector<double> _Ct, double _Whf, double _Bhf, double  _Wxf, double _Bxf); //Del estado de celda borramos aquello que no nos importa
	void puertaActualizacion(vector<double> _Xt, vector<double> _Ht, vector<double> _Ct, double _Whi, double _Bhi, double _Wxi, double _Bxi, double _Whl, double _Bhl, double _Wxl, double _Bxl); //
	void puertaSalida(vector<double> _Xt, vector<double> _Ht, vector<double> _Ct,  double _Who,double _Bho, double _Wxo, double _Bxo);
	void setSample(vector<double> _Xt);
	void inicializarRed();
	RedNeuronal(vector<double> sample);
	void predecir();
};
#endif
