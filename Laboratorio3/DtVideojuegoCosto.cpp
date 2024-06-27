#include "DtVideojuegoCosto.h"

DtVideojuegoCosto::DtVideojuegoCosto() {
	
}


DtVideojuegoCosto::DtVideojuegoCosto(string _nombre, float _costo){	
	this->nombre = _nombre;
	this->costo = _costo;
}

string DtVideojuegoCosto::getNombre(){
	return this -> nombre;
}

float DtVideojuegoCosto::getCosto(){
	return this -> costo;
}

DtVideojuegoCosto::~DtVideojuegoCosto() {
	
}
