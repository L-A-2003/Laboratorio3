#include "CostoSuscripcion.h"

CostoSuscripcion::CostoSuscripcion() {
	
}

CostoSuscripcion::CostoSuscripcion(int costo) {
	this->costo = costo;
}

int CostoSuscripcion::getCosto(){
	return this->costo;
}

CostoSuscripcion::~CostoSuscripcion() {
	
}

