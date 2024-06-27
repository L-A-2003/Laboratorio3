#include "DtSuscripcion.h"
#include "TipoSuscripcion.h"

DtSuscripcion::DtSuscripcion() {
	
}

DtSuscripcion::DtSuscripcion(TipoSuscripcion* _tipo, int _costo){	
	this->tipo = _tipo;
	this->costo = _costo;
}

TipoSuscripcion* DtSuscripcion::getTipo(){
	return this -> tipo;
}

int DtSuscripcion::getCosto(){
	return this -> costo;
}

DtSuscripcion::~DtSuscripcion() {
	
}
