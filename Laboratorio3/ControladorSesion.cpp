#include "ControladorSesion.h"
#include<iostream>

ControladorSesion::ControladorSesion() {
	
}

ControladorSesion* ControladorSesion::getInstancia() {
	if(this->instancia == NULL){
		return new ControladorSesion();
	} else {
		return this->instancia;
	}
}
