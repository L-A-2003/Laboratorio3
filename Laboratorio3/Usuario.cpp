#include "Usuario.h"
#include<string>

Usuario::Usuario() {
	
}

Usuario::Usuario(string email, string clave) {
	this->email = email;
	this->clave = clave;
}

string Usuario::getEmail(){
	return this->email;
}

string Usuario::getClave(){
	return this->clave;
}

void Usuario::setEmail(string email){
	this->email = email;
}

void Usuario::setClave(string clave){
	this->clave = clave;
}

Usuario::~Usuario() {
	
}

