#ifndef DTSUSCRIPCION_H
#define DTSUSCRIPCION_H
#include "TipoSuscripcion.h"

class DtSuscripcion {
public:
	DtSuscripcion();
	DtSuscripcion(TipoSuscripcion*, int);
	TipoSuscripcion* getTipo();
	int getCosto();
	~DtSuscripcion();
private:
	TipoSuscripcion* tipo;
	int costo;
};


#endif

