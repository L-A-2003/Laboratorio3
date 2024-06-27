#ifndef DTCOMENTARIO_H
#define DTCOMENTARIO_H
#include "DtFecha.h"
#include<string>

using namespace std;

class DtComentario {
public:
	DtComentario();
	DtComentario(int, DtFecha*, string);
	int getID();
	DtFecha* getFecha();
	string getTexto();
	~DtComentario();
private:
	int ID;
	DtFecha* fecha;
	string texto;
};


#endif

