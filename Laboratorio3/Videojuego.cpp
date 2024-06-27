#include<string>
#include "Videojuego.h"
#include "Partida.h"
#include "Categoria.h"
#include "Suscripcion.h"
#include "CostoSuscripcion.h"

using namespace std;

Videojuego::Videojuego() {
	
}

Videojuego::Videojuego(string nombre, string descripcion, UsuarioDesarrollador* creador) {
	this->nombre = nombre;
	this->descripcion = descripcion;
	this->creador = creador;
}

string Videojuego::getNombre(){
	return this->nombre;
}

string Videojuego::getDescripcion(){
	return this->descripcion;
}

float Videojuego::getPuntajePromedio(){
	return this->puntajePromedio;
}

UsuarioDesarrollador* Videojuego::getCreador(){
	return this->creador;
}

vector<Categoria*> Videojuego::getCategorias(){
	return this->categorias;
}

map<Suscripcion*, CostoSuscripcion*> Videojuego::getSuscripciones(){
	return this->suscripciones;
}

TotalHorasJugadas* Videojuego::getTotalHorasJugadas(){
	return this->totalHorasJugadas;
}

void Videojuego::setPuntajePromedio(float puntaje){
	this->puntajePromedio = puntaje;
}

void Videojuego::setCategoria(Categoria* categoria){
	this->categorias.push_back(categoria);
}

void Videojuego::setSuscripcion(Suscripcion* suscripcion, CostoSuscripcion* costo){
	this->suscripciones.insert({suscripcion, costo});
}

void Videojuego::setTotalHorasJugadas(TotalHorasJugadas* totalHoras){
	this->totalHorasJugadas = totalHoras;
}

Videojuego::~Videojuego() {
	
}

