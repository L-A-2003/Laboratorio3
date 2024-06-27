#include "SuscripcionTemporal.h"

SuscripcionTemporal::SuscripcionTemporal() {
	
}

SuscripcionTemporal::SuscripcionTemporal(int validez) {
	this->cancelada = false;
	this->validez = validez;
}

int SuscripcionTemporal::getValidez() {
	return this->validez;
}

bool SuscripcionTemporal::getCancelada() {
	return this->cancelada;
}

SuscripcionTemporal::~SuscripcionTemporal() {
	
}
