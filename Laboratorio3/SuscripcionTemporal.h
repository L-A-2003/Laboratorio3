#ifndef SUSCRIPCIONTEMPORAL_H
#define SUSCRIPCIONTEMPORAL_H
#include "Suscripcion.h"

class SuscripcionTemporal : public Suscripcion{
public:
	SuscripcionTemporal();
	SuscripcionTemporal(int);
	bool getCancelada();
	int getValidez();
	~SuscripcionTemporal();
private:
	bool cancelada;
	int validez;
};

#endif

