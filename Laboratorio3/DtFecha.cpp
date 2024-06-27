#include "DtFecha.h"

DtFecha::DtFecha() {
	
}

DtFecha::DtFecha(int dia, int mes, int anio, int hora, int minuto, int segundo){	
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
	this->hora = hora;
	this->minuto = minuto;
	this->segundo = segundo;
}

int DtFecha::getDia(){
	return this -> dia;
}

int DtFecha::getMes(){
	return this -> mes;
}

int DtFecha::getAnio(){
	return this -> anio;
}

int DtFecha::getHora(){
	return this -> hora;
}

int DtFecha::getMinutos(){
	return this -> minuto;
}

int DtFecha::getSegundos(){
	return this -> segundo;
}

DtFecha::~DtFecha() {
	
}
