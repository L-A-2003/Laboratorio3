#include "DtUsuario.h"

DtUsuario::DtUsuario() {
	
}

DtUsuario::DtUsuario(string _email, string _clave){	
	this->email = _email;
	this->clave = _clave;
}

string DtUsuario::getEmail(){
	return this -> email;
}

string DtUsuario::getClave(){
	return this -> clave;
}

DtUsuario::~DtUsuario() {
	
}
