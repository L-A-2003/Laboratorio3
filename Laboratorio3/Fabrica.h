#ifndef FABRICA_H
#define FABRICA_H
#include "InterfazControladorUsuario.h"
#include "InterfazControladorVideojuego.h"
#include "InterfazControladorPartida.h"
#include "InterfazControladorSuscripcion.h"
#include "InterfazControladorSesion.h"
#include "ControladorUsuario.h"
#include "ControladorVideojuego.h"
#include "ControladorPartida.h"
#include "ControladorSuscripcion.h"
#include "ControladorSesion.h"

class Fabrica {
public:
	Fabrica* getInstancia();
	InterfazControladorUsuario* getInterfazControladorUsuario();
	InterfazControladorVideojuego* getInterfazControladorVideojuego();
	InterfazControladorPartida* getInterfazControladorPartida();
	InterfazControladorSesion* getInterfazControladorSesion();
private:
	Fabrica();
	Fabrica* instancia; 
	InterfazControladorUsuario* instanciaControladorUsuario;
	InterfazControladorVideojuego* instanciaControladorVideojuego;
	InterfazControladorPartida* instanciaControladorPartida;
	InterfazControladorSesion* instanciaControladorSesion;
};

#endif

