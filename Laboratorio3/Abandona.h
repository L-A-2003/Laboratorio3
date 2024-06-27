#ifndef ABANDONA_H
#define ABANDONA_H
#include "DtFecha.h"

class Abandona {
public:
	Abandona();
	Abandona(DtFecha*);
	DtFecha* getHora();
	~Abandona();
private:
	DtFecha* hora;
};

#endif

