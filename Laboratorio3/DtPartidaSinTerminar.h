#ifndef DTPARTIDASINTERMINAR_H
#define DTPARTIDASINTERMINAR_H
#include "DtFecha.h"
#include<string>

using namespace std;

class DtPartidaSinTerminar {
public:
	DtPartidaSinTerminar();
	DtPartidaSinTerminar(int, DtFecha*, string);
	int getID();
	DtFecha* getFechaComienzo();
	string getVideojuego();
	~DtPartidaSinTerminar();
private:
	int ID;
	DtFecha* fechaComienzo;
	string videojuego;
};


#endif

