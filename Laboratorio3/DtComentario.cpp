#include "DtComentario.h"
#include "DtFecha.h"

DtComentario::DtComentario() {
	
}

DtComentario::DtComentario(int _ID, DtFecha* _fecha, string _texto){	
	this->ID = _ID;
	this->fecha = _fecha;
	this->texto = _texto;
}

int DtComentario::getID(){
	return this -> ID;
}

DtFecha* DtComentario::getFecha(){
	return this -> fecha;
}

string DtComentario::getTexto(){
	return this -> texto;
}

DtComentario::~DtComentario() {
	
}
