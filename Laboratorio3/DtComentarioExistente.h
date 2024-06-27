#ifndef DTCOMENTARIOEXISTENTE_H
#define DTCOMENTARIOEXISTENTE_H
#include "DtFecha.h"
#include<vector>
#include<string>

using namespace std;

class DtComentarioExistente {
public:
	DtComentarioExistente();
	DtComentarioExistente(int, DtFecha*, string, string);
	int getID();
	DtFecha* getFecha();
	string getNickname();
	string getTexto();
	~DtComentarioExistente();
private:
	int ID;
	DtFecha* fecha;
	string nickname;
	string texto;
};


#endif

