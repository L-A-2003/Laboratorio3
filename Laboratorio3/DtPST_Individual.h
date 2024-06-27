#ifndef DTPST_INDIVIDUAL_H
#define DTPST_INDIVIDUAL_H
#include "DtPartidaSinTerminar.h"

class DtPST_Individual : public DtPartidaSinTerminar {
public:
	DtPST_Individual();
	DtPST_Individual(bool);
	bool getContinuacion();
	~DtPST_Individual();
private:
	bool continuacion;
};


#endif

