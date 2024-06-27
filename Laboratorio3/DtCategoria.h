#ifndef DTCATEGORIA_H
#define DTCATEGORIA_H
#include<string>

using namespace std;

class DtCategoria {
public:
	DtCategoria();
	DtCategoria(string, string);
	string getNombre();
	string getDescripcion();
	~DtCategoria();
private:
	string nombre;
	string descripcion;
};


#endif

