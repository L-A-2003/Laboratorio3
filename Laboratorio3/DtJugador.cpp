#include "DtJugador.h"

DtJugador::DtJugador() {
	
}

DtJugador::DtJugador(string _nickname, string _descripcion){	
	this->nickname = _nickname;
	this->descripcion = _descripcion;
}

string DtJugador::getNickname(){
	return this -> nickname;
}

string DtJugador::getDescripcion(){
	return this -> descripcion;
}

DtJugador::~DtJugador() {
	
}
