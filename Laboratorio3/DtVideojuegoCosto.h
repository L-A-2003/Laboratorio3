#ifndef DTVIDEOJUEGOCOSTO_H
#define DTVIDEOJUEGOCOSTO_H
#include<string>

using namespace std;

class DtVideojuegoCosto {
public:
	DtVideojuegoCosto();
	DtVideojuegoCosto(string, float);
	string getNombre();
	float getCosto();
	~DtVideojuegoCosto();
private:
	string nombre;
	float costo;
};


#endif

