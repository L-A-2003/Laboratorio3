#ifndef DTPST_MUTLIJUGADOR_H
#define DTPST_MUTLIJUGADOR_H
#include<vector>
#include<string>
#include "DtPartidaSinTerminar.h"

using namespace std;

class DtPST_Multijugador : public DtPartidaSinTerminar {
public:
	DtPST_Multijugador();
	DtPST_Multijugador(bool, vector<string>);
	bool getTransmision();
	vector<string> getJugadoresUnidos();
	~DtPST_Multijugador();
private:
	bool Transmision;
	vector<string> jugadoresUnidos;
};


#endif

