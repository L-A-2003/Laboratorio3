#ifndef INTERFAZCONTROLADORPARTIDA_H
#define INTERFAZCONTROLADORPARTIDA_H
#include<vector>
#include<string>
#include "DtPartidaSinTerminar.h"
#include "DtPartidaEnTransmision.h"
#include "DtPartida.h"
#include "DtComentarioExistente.h"
#include "DtComentario.h"

using namespace std;

class InterfazControladorPartida {
public:
	InterfazControladorPartida();
	
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
};

#endif

