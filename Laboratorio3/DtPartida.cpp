#include "DtPartida.h"

DtPartida::DtPartida() {
	
}

DtPartida::DtPartida(int _ID, DtFecha* _fecha, string _videojuego, bool _transmision, string _jugadorInicio, vector<string> _jugadoresUnidos){	
	this->ID = _ID;
	this->fechaHora = _fecha;
	this->videojuego = _videojuego;
	this->transmitida = _transmision;
	this->jugadorInicio = jugadorInicio;
	this->jugadoresUnidos = _jugadoresUnidos;
}

int DtPartida::getID(){
	return this -> ID;
}

DtFecha* DtPartida::getFechaHora(){
	return this -> fechaHora;
}

string DtPartida::getVideojuego(){
	return this -> videojuego;
}

bool DtPartida::getTransmision(){
	return this -> transmitida;
}

string DtPartida::getJugadorInicio(){
	return this -> jugadorInicio;
}

vector<string> DtPartida::getJugadoresUnidos(){
	return this -> jugadoresUnidos;
}

DtPartida::~DtPartida() {
	
}
