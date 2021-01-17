#include "Neurona.h"


Neurona::Neurona(vector<double> _Xt) {
	this->Whf = 0;
	this->Bhf = 0;
	this->Wxf = 0;
	this->Bxf = 0;
	this->Whi = 0;
	this->Bhi = 0;
	this->Wxi = 0;
	this->Bxi = 0;
	this->Whl = 0;
	this->Bhl = 0;
	this->Wxl = 0;
	this->Bxl = 0;
	this->Who = 0;
	this->Bho = 0;
	this->Wxo = 0;
	this->Bxo = 0;

	for (int i = 0; i< _Xt.size() ;i++) {
		this->Ht[i] = 0;
		this->Ct[i] = 0;
	}

}




