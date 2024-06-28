#include "ControladorUsuario.h"
#include<iostream>
ControladorUsuario::ControladorUsuario() {
	
}

ControladorUsuario* ControladorUsuario::getInstancia() {
	if(this->instancia == NULL){
		return new ControladorUsuario();
	} else {
		return this->instancia;
	}
}
