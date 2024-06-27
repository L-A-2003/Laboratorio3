#include "Comentario.h"
#include<string>
#include<vector>
#include "DtFecha.h"

using namespace std;

Comentario::Comentario() {
	
}

Comentario::Comentario(int identificador, DtFecha* fecha, string texto, UsuarioJugador* creador) {
	this->identificador = identificador;
	this->fecha = fecha;
	this->texto = texto;
	this->creador = creador;
}

int Comentario::getIdentificador(){
	return this->identificador;
}

DtFecha* Comentario::getFecha(){
	return this->fecha;
}

string Comentario::getTexto(){
	return this->texto;
}

UsuarioJugador* Comentario::getCreador(){
	return this->creador;
}

vector<Comentario*> Comentario::getRespuestas(){
	return this->respuestas;
}

Comentario::~Comentario() {
	
}
