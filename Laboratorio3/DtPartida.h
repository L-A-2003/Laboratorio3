#ifndef DTPARTIDA_H
#define DTPARTIDA_H
#include "DtFecha.h"
#include<string>
#include<vector>

using namespace std;

class DtPartida {
public:
	DtPartida();
	DtPartida(int, DtFecha*, string, bool, string, vector<string>);
	int getID();
	DtFecha* getFechaHora();
	string getVideojuego();
	bool getTransmision();
	string getJugadorInicio();
	vector<string> getJugadoresUnidos();
	~DtPartida();
private:
	int ID;
	DtFecha* fechaHora;
	string videojuego;
	bool transmitida;
	string jugadorInicio;
	vector<string> jugadoresUnidos;
};

#endif

