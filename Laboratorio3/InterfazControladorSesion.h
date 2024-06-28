#ifndef INTERFAZCONTROLADORSESION_H
#define INTERFAZCONTROLADORSESION_H
#include<string>
#include "Usuario.h"

using namespace std;

class InterfazControladorSesion {
public:
	virtual ~InterfazControladorSesion() = default;
	
	virtual void iniciarSesion(string, string) = 0;
	virtual void cancelarIniciarSesion() = 0;
	virtual Usuario* obtenerUsuarioActual() = 0; 
private:
};

#endif

