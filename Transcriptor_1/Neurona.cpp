#include "Neurona.h"


Neurona::Neurona(int vectam) {
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

	for (int i = 0; i< vectam;i++) {
		this->Ht.push_back(0);
		this->Ct.push_back(0);
	}

}




