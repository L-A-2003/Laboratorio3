#include "DtComentarioExistente.h"
#include "DtFecha.h"

DtComentarioExistente::DtComentarioExistente() {
	
}

DtComentarioExistente::DtComentarioExistente(int _ID, DtFecha* _fecha, string _nickname, string _texto){	
	this->ID = _ID;
	this->fecha = _fecha;
	this->nickname = _nickname;
	this->texto = _texto;
}

int DtComentarioExistente::getID(){
	return this -> ID;
}

DtFecha* DtComentarioExistente::getFecha(){
	return this -> fecha;
}

string DtComentarioExistente::getNickname(){
	return this -> nickname;
}

string DtComentarioExistente::getTexto(){
	return this -> texto;
}

DtComentarioExistente::~DtComentarioExistente() {
	
}
