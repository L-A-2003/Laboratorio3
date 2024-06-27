#ifndef INTERFAZCONTROLADORSESION_H
#define INTERFAZCONTROLADORSESION_H
#include<string>
#include "Usuario.h"

using namespace std;

class InterfazControladorSesion {
public:
	InterfazControladorSesion();
	
	void iniciarSesion(string, string);
	void cancelarIniciarSesion();
	Usuario* obtenerUsuarioActual(); 
private:
};

#endif

