#ifndef INTERFAZCONTROLADORUSUARIO_H
#define INTERFAZCONTROLADORUSUARIO_H
#include<vector>
#include<string>
#include "DtUsuario.h"

using namespace std;

class InterfazControladorUsuario {
public:
	virtual ~InterfazControladorUsuario() = default;
	
	virtual vector<string> listarJugadoresVideojuego() = 0;
	virtual vector<string> listarJugadores() = 0;
	virtual void ingresarDatosUsuario(DtUsuario*) = 0;
	virtual void ingresarNombreEmpresa(string) = 0;
	virtual void ingresarNickname(string) = 0;
	virtual void ingresarDescripcion(string) = 0;
	virtual void cancelarUsuario() = 0;
	virtual void darAltaUsuario() = 0;
	virtual void seguirJugador(string) = 0;
private:
};

#endif

