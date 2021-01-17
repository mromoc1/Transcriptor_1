#pragma once
#include <vector>
using namespace std;



class Neurona{
public:
	vector<double> Ct; //Estado de celda (matriz o vector?)
	vector<double> Ht; //salida anterior
	vector<double> Xt; //vector entrante del mas alla
	
	double Whf; //peso forget 
	double Bhf; //sesgo
	double Wxf; //peso
	double Bxf; //sesgo

	double Whi; //peso
	double Bhi; //sesgo
	double Wxi; //peso
	double Bxi; //sesgo

	double Whl; //peso
	double Bhl; //sesgo
	double Wxl; //peso
	double Bxl; //sesgo

	double Who; //peso
	double Bho; //sesgo
	double Wxo; //peso
	double Bxo; //sesgo
	Neurona(vector<double> _Xt);
};

