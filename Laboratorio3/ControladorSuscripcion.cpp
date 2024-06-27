#include "ControladorSuscripcion.h"
#include<iostream>

ControladorSuscripcion::ControladorSuscripcion() {
	
}

ControladorSuscripcion* ControladorSuscripcion::getInstancia() {
	if(this->instancia == NULL){
		return new ControladorSuscripcion();
	} else {
		return this->instancia;
	}
}
