#ifndef COMENTARIO_H
#define COMENTARIO_H
#include<string>
#include<vector>
#include "DtFecha.h"
#include "UsuarioJugador.h"

using namespace std;

class Comentario {
public:
	Comentario();
	Comentario(int, DtFecha*, string, UsuarioJugador*);
	int getIdentificador();
	DtFecha* getFecha();
	string getTexto();
	UsuarioJugador* getCreador();
	vector<Comentario*> getRespuestas();
	~Comentario();
private:
	int identificador;
	string texto;
	DtFecha* fecha;
	UsuarioJugador* creador;
	vector<Comentario*> respuestas;
};

#endif

