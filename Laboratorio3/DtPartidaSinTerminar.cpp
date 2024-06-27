#include "DtPartidaSinTerminar.h"
#include "DtFecha.h"

DtPartidaSinTerminar::DtPartidaSinTerminar() {
	
}

DtPartidaSinTerminar::DtPartidaSinTerminar(int _ID, DtFecha* _fecha, string _videojuego){	
	this->ID = _ID;
	this->fechaComienzo = _fecha;
	this->videojuego = _videojuego;
}

int DtPartidaSinTerminar::getID(){
	return this -> ID;
}

DtFecha* DtPartidaSinTerminar::getFechaComienzo(){
	return this -> fechaComienzo;
}

string DtPartidaSinTerminar::getVideojuego(){
	return this -> videojuego;
}

DtPartidaSinTerminar::~DtPartidaSinTerminar() {
	
}
