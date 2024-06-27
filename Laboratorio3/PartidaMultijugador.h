#ifndef PARTIDAMULTIJUGADOR_H
#define PARTIDAMULTIJUGADOR_H
#include "Partida.h"
#include "DtFecha.h"
#include "Abandona.h"
#include "Comentario.h"
#include "UsuarioJugador.h"
#include<vector>
#include<map>

class PartidaMultijugador : public Partida{
public:
	PartidaMultijugador();
	PartidaMultijugador(DtFecha*, float, bool);
	float getDuracion();
	bool getTransmicion();
	vector<Comentario*> getComentarios();
	vector<UsuarioJugador*> getJugadoresEnPartida();
	void setJugadorEnPartida(UsuarioJugador*);
	~PartidaMultijugador();
private:
	float duracion;
	bool transmicion;
	vector<Comentario*> comentarios;
	vector<UsuarioJugador*> jugadoresEnPartida;
	map<UsuarioJugador*, Abandona*> jugadoresQueSalieron;
};

#endif

