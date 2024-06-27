#ifndef CATEGORIA_H
#define CATEGORIA_H
#include<string>
#include "UsuarioDesarrollador.h"

using namespace std;

class Categoria {
public:
	Categoria();
	Categoria(string, string, UsuarioDesarrollador*);
	~Categoria();
	string getNombre();
	string getDescripcion();
	UsuarioDesarrollador* getCreador();
private:
	string nombre;
	string descripcion;
	UsuarioDesarrollador* creador;
};

#endif

