#ifndef PARTIDAINDIVIDUAL_H
#define PARTIDAINDIVIDUAL_H
#include "Partida.h"
#include "DtFecha.h"
#include "UsuarioJugador.h"

class PartidaIndividual : public Partida{
public:
	PartidaIndividual();
	PartidaIndividual(DtFecha*, bool);
	bool getContinuacion();
	~PartidaIndividual();
private:
	bool continuacion;
};

#endif

