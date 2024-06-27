#include "DtInfoVideojuego.h"
#include "TiempoSuscripcion.h"

DtInfoVideojuego::DtInfoVideojuego() {
	
}

DtInfoVideojuego::DtInfoVideojuego(string _descripcion,string _empresa,TiempoSuscripcion* _suscripcion, vector<int> _costos, vector<string> _categorias, float _puntajePromedio, int _horasJugadas){	
	this->descripcion = _descripcion;
	this->nombreEmpresa = _empresa;
	this->suscripcion = _suscripcion;
	this->CostoPorSuscripcion = _costos;
	this->Categorias = _categorias;
	this->puntajePromedio = _puntajePromedio;
	this->totalHorasJugadas = _horasJugadas;
}

string DtInfoVideojuego::getDescripcion(){
	return this -> descripcion;
}

string DtInfoVideojuego::getEmpresa(){
	return this -> nombreEmpresa;
}

TiempoSuscripcion* DtInfoVideojuego::getSuscripcion(){
	return this -> suscripcion;
}

vector<int> DtInfoVideojuego::getCostoPorSuscripcion(){
	return this -> CostoPorSuscripcion;
}

vector<string> DtInfoVideojuego::getCategorias(){
	return this -> Categorias;
}

float DtInfoVideojuego::getPuntaje(){
	return this -> puntajePromedio;
}

int DtInfoVideojuego::getTotalHorasJugadas(){
	return this -> totalHorasJugadas;
}

DtInfoVideojuego::~DtInfoVideojuego() {
	
}
