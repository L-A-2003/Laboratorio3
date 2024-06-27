#include "DtPST_Individual.h"

DtPST_Individual::DtPST_Individual() {
	
}

DtPST_Individual::DtPST_Individual(bool _continuacion){	
	this->continuacion = _continuacion;
}

bool DtPST_Individual::getContinuacion(){
	return this -> continuacion;
}

DtPST_Individual::~DtPST_Individual() {
	
}
