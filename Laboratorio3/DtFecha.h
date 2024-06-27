#ifndef DTFECHA_H
#define DTFECHA_H

class DtFecha {
public:
	DtFecha();
	DtFecha(int, int, int, int, int, int);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	int getMinutos();
	int getSegundos();
	~DtFecha();
private:
	int dia, mes, anio, hora, minuto, segundo;
};

#endif

