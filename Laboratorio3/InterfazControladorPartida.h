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
	virtual ~InterfazControladorPartida() = default;
	
	virtual vector<DtPartida*> listarPartidas() = 0;
	virtual vector<DtPartidaSinTerminar*> listarPartidasSinTerminar() = 0;
	virtual vector<DtPartidaEnTransmision*> listarPartidasEnTransmision() = 0;
	virtual vector<DtPartida*> historialPartidasIndividualesFinalizadas() = 0;
	virtual void confirmarAbandonarPartida(int) = 0;
	virtual void seleccionarPartida(int) = 0;
	virtual void finalizarPartida(int) = 0;
	virtual void transmitirPartida(bool) = 0;
	virtual void agregarJugadorPartida(string) = 0;
	virtual void iniciarPartida() = 0;
	virtual void cancelarPartida() = 0;
	virtual void cancelarAbandonarPartida() = 0;
	virtual void cancelarFinalizacion() = 0;
	virtual vector<DtComentarioExistente*> listarComentariosExistentes() = 0;
	virtual vector<int>seleccionarComentarioResponder() = 0;
	virtual void ingresarTexto(string) = 0;
	virtual void confirmarComentario(DtComentario*) = 0;
	virtual void cancelarComentario() = 0;
private:
};

#endif

