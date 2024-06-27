#include "ControladorVideojuego.h"
#include<iostream>

ControladorVideojuego::ControladorVideojuego() {
	
}

ControladorVideojuego* ControladorVideojuego::getInstancia() {
	if(this->instancia == NULL){
		return new ControladorVideojuego();
	} else {
		return this->instancia;
	}
}
