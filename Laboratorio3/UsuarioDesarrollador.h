#ifndef USUARIODESARROLLADOR_H
#define USUARIODESARROLLADOR_H
#include<string>
#include<vector>
#include "Usuario.h"

using namespace std;

class UsuarioDesarrollador : public Usuario{
public:
	UsuarioDesarrollador();
	UsuarioDesarrollador(string, string);
	~UsuarioDesarrollador();
private:
};

#endif

