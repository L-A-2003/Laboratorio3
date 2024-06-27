#ifndef INTERFAZCONTROLADORUSUARIO_H
#define INTERFAZCONTROLADORUSUARIO_H
#include<vector>
#include<string>
#include "DtUsuario.h"

using namespace std;

class InterfazControladorUsuario {
public:
	InterfazControladorUsuario();
	
	vector<string> listarJugadoresVideojuego();
	vector<string> listarJugadores();
	void ingresarDatosUsuario(DtUsuario*);
	void ingresarNombreEmpresa(string);
	void ingresarNickname(string);
	void ingresarDescripcion(string);
	void cancelarUsuario();
	void darAltaUsuario();
	void seguirJugador(string);
private:
};

#endif

