#ifndef DTUSUARIO_H
#define DTUSUARIO_H
#include<string>

using namespace std;

class DtUsuario {
public:
	DtUsuario();
	DtUsuario(string, string);
	string getEmail();
	string getClave();
	~DtUsuario();
private:
	string email;
	string clave;
};


#endif

