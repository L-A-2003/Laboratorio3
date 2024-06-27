#include "Abandona.h"

Abandona::Abandona() {
	
}

Abandona::Abandona(DtFecha* hora) {
	this->hora = hora;
}

DtFecha* Abandona::getHora(){
	return this->hora;
}

Abandona::~Abandona() {
	
}
