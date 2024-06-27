#ifndef CONTROLADORUSUARIO_H
#define CONTROLADORUSUARIO_H
#include<vector>
#include<string>
#include "InterfazControladorUsuario.h"
#include "Usuario.h"
#include "DtUsuario.h"

using namespace std;

class ControladorUsuario : public InterfazControladorUsuario {
public:
	ControladorUsuario* getInstancia();
	
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
	ControladorUsuario();
	ControladorUsuario* instancia;
	vector<Usuario*> usuarios;
};

#endif
