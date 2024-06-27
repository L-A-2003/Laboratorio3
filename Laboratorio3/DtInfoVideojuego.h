#ifndef DTINFOVIDEOJUEGO_H
#define DTINFOVIDEOJUEGO_H
#include "TiempoSuscripcion.h"
#include<vector>
#include<string>

using namespace std;

class DtInfoVideojuego {
public:
	DtInfoVideojuego();
	DtInfoVideojuego(string, string, TiempoSuscripcion*, vector<int>, vector<string>, float, int);
	string getDescripcion();
	string getEmpresa();
	float getPuntaje();
	int getTotalHorasJugadas();
	TiempoSuscripcion* getSuscripcion();
	vector<int> getCostoPorSuscripcion();
	vector<string> getCategorias();
	~DtInfoVideojuego();
private:
	string descripcion;
	string nombreEmpresa;
	TiempoSuscripcion* suscripcion;
	vector<int> CostoPorSuscripcion;
	vector<string> Categorias;
	float puntajePromedio;
	int totalHorasJugadas;
};


#endif

