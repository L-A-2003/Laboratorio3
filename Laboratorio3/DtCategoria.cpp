#include "DtCategoria.h"

DtCategoria::DtCategoria() {
	
}

DtCategoria::DtCategoria(string _nombre, string _descripcion){	
	this->nombre = _nombre;
	this->descripcion = _descripcion;
}

string DtCategoria::getNombre(){
	return this -> nombre;
}

string DtCategoria::getDescripcion(){
	return this -> descripcion;
}

DtCategoria::~DtCategoria() {
	
}
