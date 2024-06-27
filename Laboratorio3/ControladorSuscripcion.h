#ifndef CONTROLADORSUSCRIPCION_H
#define CONTROLADORSUSCRIPCION_H
#include "InterfazControladorSuscripcion.h"

class ControladorSuscripcion : public InterfazControladorSuscripcion{
public:
	ControladorSuscripcion* getInstancia();
private:
	ControladorSuscripcion();
	ControladorSuscripcion* instancia;
};

#endif

