#ifndef PARTIDA_H
#define PARTIDA_H
#include "DtFecha.h"
#include "UsuarioJugador.h"

class Partida {
public:
	Partida();
	Partida(DtFecha*, UsuarioJugador*);
	DtFecha* getFecha();
	UsuarioJugador* getCreador();
	void setFecha(DtFecha*);
	void setCreador(UsuarioJugador*);
	~Partida();
private:
	DtFecha* fecha;
	UsuarioJugador* creador;
};

#endif

