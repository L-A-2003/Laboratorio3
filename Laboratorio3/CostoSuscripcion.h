#ifndef COSTOSUSCRIPCION_H
#define COSTOSUSCRIPCION_H

class CostoSuscripcion {
public:
	CostoSuscripcion();
	CostoSuscripcion(int);
	int getCosto();
	~CostoSuscripcion();
private:
	int costo;
};

#endif

