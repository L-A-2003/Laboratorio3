#include "Fabrica.h"
#include<iostream>

Fabrica::Fabrica() {
}

Fabrica* Fabrica::getInstancia() {
	if(this->instancia == NULL){
		return new Fabrica();
	} else {
		return this->instancia;
	}
}

InterfazControladorUsuario* Fabrica::getInterfazControladorUsuario(){
	ControladorUsuario* controlador;
	return controlador->getInstancia();
}

InterfazControladorVideojuego* Fabrica::getInterfazControladorVideojuego(){
	ControladorVideojuego* controlador;
	return controlador->getInstancia();
}

InterfazControladorPartida* Fabrica::getInterfazControladorPartida(){
	ControladorPartida* controlador;
	return controlador->getInstancia();
}

InterfazControladorSesion* Fabrica::getInterfazControladorSesion(){
	ControladorSesion* controlador;
	return controlador->getInstancia();
}
