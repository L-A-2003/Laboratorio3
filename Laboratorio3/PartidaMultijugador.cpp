#include "PartidaMultijugador.h"
#include "DtFecha.h"
#include "Comentario.h"
#include "UsuarioJugador.h"
#include<vector>

PartidaMultijugador::PartidaMultijugador() {
	
}

PartidaMultijugador::PartidaMultijugador(DtFecha* fecha, float duracion, bool transmicion) {
	this->setFecha(fecha);
	this->duracion = duracion;
	this->transmicion = transmicion;
}

float PartidaMultijugador::getDuracion(){
	return this->duracion;
}

bool PartidaMultijugador::getTransmicion(){
	return this->transmicion;
}

vector<Comentario*> PartidaMultijugador::getComentarios(){
	return this->comentarios;
}

vector<UsuarioJugador*> PartidaMultijugador::getJugadoresEnPartida(){
	return this->jugadoresEnPartida;
}

void PartidaMultijugador::setJugadorEnPartida(UsuarioJugador* jugador){
	this->jugadoresEnPartida.push_back(jugador);
}

PartidaMultijugador::~PartidaMultijugador() {
	
}
