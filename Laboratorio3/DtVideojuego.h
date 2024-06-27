#ifndef DTVIDEOJUEGO_H
#define DTVIDEOJUEGO_H
#include<string>

using namespace std;

class DtVideojuego {
public:
	DtVideojuego();
	DtVideojuego(string, string);
	string getNombre();
	string getDescripcion();
	~DtVideojuego();
private:
	string nombre;
	string descripcion;
};


#endif

