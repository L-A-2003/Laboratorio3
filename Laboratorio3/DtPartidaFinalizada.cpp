#include "DtPartidaFinalizada.h"
#include "DtFecha.h"

DtPartidaFinalizada::DtPartidaFinalizada() {
	
}

DtPartidaFinalizada::DtPartidaFinalizada(int _ID, DtFecha* _fecha, float _duracion){	
	this->ID = _ID;
	this->fechaHora = _fecha;
	this->duracion = _duracion;
}

int DtPartidaFinalizada::getID(){
	return this -> ID;
}

DtFecha* DtPartidaFinalizada::getFechaHora(){
	return this -> fechaHora;
}

float DtPartidaFinalizada::getDuracion(){
	return this -> duracion;
}

DtPartidaFinalizada::~DtPartidaFinalizada() {
	
}
