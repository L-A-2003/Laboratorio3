#include "Transaccion.h"

Transaccion::Transaccion() {
	
}

Transaccion::Transaccion(DtFecha* fecha, MetodoPago metodoPago, int costo) {
	this->fecha = fecha;
	this->metodoPago = metodoPago;
	this->costo = costo;
}

DtFecha* Transaccion::getFecha(){
	return this->fecha;
}

MetodoPago Transaccion::getMetodoPago(){
	return this->metodoPago;
}

int Transaccion::getCosto(){
	return this->costo;
}

Transaccion::~Transaccion() {
	
}
