#include "DtDesarrollador.h"

DtDesarrollador::DtDesarrollador() {
	
}

DtDesarrollador::DtDesarrollador(string _empresa){	
	this->empresaTrabaja = _empresa;
}

string DtDesarrollador::getEmpresa(){
	return this -> empresaTrabaja;
}

DtDesarrollador::~DtDesarrollador() {
	
}
