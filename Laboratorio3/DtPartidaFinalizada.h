#ifndef DTPARTIDAFINALIZADA_H
#define DTPARTIDAFINALIZADA_H
#include "DtFecha.h"

class DtPartidaFinalizada {
public:
	DtPartidaFinalizada();
	DtPartidaFinalizada(int, DtFecha*, float);
	int getID();
	DtFecha* getFechaHora();
	float getDuracion();
	~DtPartidaFinalizada();
private:
	int ID;
	DtFecha* fechaHora;
	float duracion;
};


#endif

