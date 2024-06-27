#ifndef TRANSACCION_H
#define TRANSACCION_H
#include "MetodoPago.h"
#include "DtFecha.h"

class Transaccion {
public:
	Transaccion();
	Transaccion(DtFecha*, MetodoPago, int);
	DtFecha* getFecha();
	MetodoPago getMetodoPago();
	int getCosto();
	~Transaccion();
private:
	DtFecha* fecha;
	MetodoPago metodoPago;
	int costo;
};

#endif

