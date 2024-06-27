#ifndef CONTROLADORSESION_H
#define CONTROLADORSESION_H
#include "InterfazControladorSesion.h"
#include "Usuario.h"

class ControladorSesion : public InterfazControladorSesion{
public:
	ControladorSesion* getInstancia();
	
	void iniciarSesion(string, string);
	void cancelarIniciarSesion();
	Usuario* obtenerUsuarioActual(); 
private:
	ControladorSesion();
	ControladorSesion* instancia;
	Usuario* usuarioActual;
};

#endif

