#include "PartidaIndividual.h"
#include "UsuarioJugador.h"
#include "DtFecha.h"

PartidaIndividual::PartidaIndividual() {
	
}

PartidaIndividual::PartidaIndividual(DtFecha* fecha, bool continuacion) {
	this->setFecha(fecha);
	this->continuacion = continuacion;
}

bool PartidaIndividual::getContinuacion(){
	return this->continuacion;
}

PartidaIndividual::~PartidaIndividual() {
	
}
