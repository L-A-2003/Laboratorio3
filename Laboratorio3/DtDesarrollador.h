#ifndef DTDESARROLLADOR_H
#define DTDESARROLLADOR_H
#include<string>
#include "DtUsuario.h"

using namespace std;

class DtDesarrollador : public DtUsuario {
public:
	DtDesarrollador();
	DtDesarrollador(string);
	string getEmpresa();
	~DtDesarrollador();
private:
	string empresaTrabaja;
};


#endif

