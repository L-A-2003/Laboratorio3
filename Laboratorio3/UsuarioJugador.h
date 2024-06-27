#ifndef USUARIOJUGADOR_H
#define USUARIOJUGADOR_H
#include<string>
#include<vector>
#include<map>
#include "Usuario.h"
#include "Estadistica.h"
#include "Videojuego.h"
#include "Suscripcion.h"
#include "Transaccion.h"

using namespace std;

class UsuarioJugador : public Usuario{
public:
	UsuarioJugador();
	UsuarioJugador(string, string, string, string);
	string getNickname();
	string getDescripcion();
	vector<UsuarioJugador*> getJugadoresSeguidos();
	map<Videojuego*, Estadistica*> getPuntuacionesVideojuegos();
	map<Videojuego*, Suscripcion*> getVideojuegosSuscriptos();
	map<Transaccion*, Suscripcion*> getHistorialSuscripciones();
	void setJugadorSeguido(UsuarioJugador*);
	void setPuntuacionVideojuego(Videojuego*, Estadistica*);
	void setVideojuegoSuscripto(Videojuego*, Suscripcion*);
	void setHistorialSuscripciones(Transaccion*, Suscripcion*);
	~UsuarioJugador();
private:
	string nickname;
	string descripcion;
	vector<UsuarioJugador*> jugadoresSeguidos;
	map<Videojuego*, Estadistica*> puntuacionesVideojuegos;
	map<Videojuego*, Suscripcion*> videojuegosSuscriptos;
	map<Transaccion*, Suscripcion*> historialSuscripciones;
};

#endif

