#include "UsuarioJugador.h"

UsuarioJugador::UsuarioJugador() {
	
}

UsuarioJugador::UsuarioJugador(string email, string clave, string nickname, string descripcion) {
	this->setEmail(email);
	this->setClave(clave);
	this->nickname = nickname;
	this->descripcion = descripcion;
}

string UsuarioJugador::getNickname(){
	return this->nickname;
}

string UsuarioJugador::getDescripcion(){
	return this->descripcion;
}

vector<UsuarioJugador*> UsuarioJugador::getJugadoresSeguidos(){
	return this->jugadoresSeguidos;
}

map<Videojuego*, Estadistica*> UsuarioJugador::getPuntuacionesVideojuegos(){
	return this->puntuacionesVideojuegos;
}

map<Videojuego*, Suscripcion*> UsuarioJugador::getVideojuegosSuscriptos(){
	return this->videojuegosSuscriptos;
}

map<Transaccion*, Suscripcion*> UsuarioJugador::getHistorialSuscripciones(){
	return this->historialSuscripciones;
}

void UsuarioJugador::setJugadorSeguido(UsuarioJugador* jugador){
	this->jugadoresSeguidos.push_back(jugador);
}

void UsuarioJugador::setPuntuacionVideojuego(Videojuego* videojuego, Estadistica* estadistica){
	this->puntuacionesVideojuegos.insert({videojuego, estadistica});
}

void UsuarioJugador::setVideojuegoSuscripto(Videojuego* videojuego, Suscripcion* suscripcion){
	this->videojuegosSuscriptos.insert({videojuego, suscripcion});
}

void UsuarioJugador::setHistorialSuscripciones(Transaccion* transaccion, Suscripcion* suscripcion){
	this->historialSuscripciones.insert({transaccion, suscripcion});
}

UsuarioJugador::~UsuarioJugador() {
	
}
