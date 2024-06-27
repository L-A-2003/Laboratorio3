#include "Partida.h"
#include "DtFecha.h"

Partida::Partida() {
	
}

Partida::Partida(DtFecha* fecha, UsuarioJugador* jugador) {
	this->fecha = fecha;
	this->creador = jugador;
}

DtFecha* Partida::getFecha(){
	return this->fecha;
}

UsuarioJugador* Partida::getCreador(){
	return this->creador;
}

void Partida::setFecha(DtFecha* fecha){
	this->fecha = fecha;
}

void Partida::setCreador(UsuarioJugador* creador){
	this->creador = creador;
}

Partida::~Partida() {
	
}
