#ifndef CONTROLADORPARTIDA_H
#define CONTROLADORPARTIDA_H
#include<vector>
#include<map>
#include "Videojuego.h"
#include "Partida.h"
#include "InterfazControladorPartida.h"
#include "DtPartidaSinTerminar.h"
#include "DtPartidaEnTransmision.h"
#include "DtPartida.h"
#include "DtComentarioExistente.h"
#include "DtComentario.h"

class ControladorPartida : public InterfazControladorPartida {
public:
	ControladorPartida* getInstancia();
	
	vector<DtPartida*> listarPartidas();
	vector<DtPartidaSinTerminar*> listarPartidasSinTerminar();
	vector<DtPartidaEnTransmision*> listarPartidasEnTransmision();
	vector<DtPartida*> historialPartidasIndividualesFinalizadas();
	void confirmarAbandonarPartida(int);
	void seleccionarPartida(int);
	void finalizarPartida(int);
	void transmitirPartida(bool);
	void agregarJugadorPartida(string);
	void iniciarPartida();
	void cancelarPartida();
	void cancelarAbandonarPartida();
	void cancelarFinalizacion();
	vector<DtComentarioExistente*> listarComentariosExistentes();
	vector<int>seleccionarComentarioResponder();
	void ingresarTexto(string);
	void confirmarComentario(DtComentario*);
	void cancelarComentario();
private:
	ControladorPartida();
	ControladorPartida* instancia;
	map<Videojuego*, vector<Partida*>> PartidasVideojuego; 
};

#endif

