#ifndef DTJUGADOR_H
#define DTJUGADOR_H
#include<string>
#include "DtUsuario.h"

using namespace std;

class DtJugador : public DtUsuario {
public:
	DtJugador();
	DtJugador(string, string);
	string getNickname();
	string getDescripcion();
	~DtJugador();
private:
	string nickname;
	string descripcion;
};


#endif

