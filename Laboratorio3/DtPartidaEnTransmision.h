#ifndef DTPARTIDAENTRANSMICION_H
#define DTPARTIDAENTRANSMICION_H
#include<vector>
#include<string>

using namespace std;

class DtPartidaEnTransmision {
public:
	DtPartidaEnTransmision();
	DtPartidaEnTransmision(int, string, string, vector<string>);
	int getID();
	string getVideojuego();
	string getJugadorInicio();
	vector<string> getJugadoresUnidos();
	~DtPartidaEnTransmision();
private:
	int ID;
	string videojuego;
	string jugadorInicio;
	vector<string> jugadoresUnidos;
};


#endif

