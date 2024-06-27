#include "Categoria.h"
#include<string>

using namespace std;

Categoria::Categoria() {
	
}

Categoria::Categoria(string nombre, string descripcion, UsuarioDesarrollador* creador) {
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->creador = creador;
}

string Categoria::getNombre(){
	return this->nombre;
}

string Categoria::getDescripcion(){
	return this->descripcion;
}

UsuarioDesarrollador* Categoria::getCreador(){
	return this->creador;
}

Categoria::~Categoria() {
	
}
