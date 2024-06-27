#include "ControladorPartida.h"
#include<iostream>

ControladorPartida::ControladorPartida() {
	
}

ControladorPartida* ControladorPartida::getInstancia() {
	if(this->instancia == NULL){
		return new ControladorPartida();
	} else {
		return this->instancia;
	}
}
