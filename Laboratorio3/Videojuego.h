#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include<vector>
#include <map>
#include<string>
#include "Categoria.h"
#include "Suscripcion.h"
#include "CostoSuscripcion.h"
#include "UsuarioDesarrollador.h"
#include "TotalHorasJugadas.h"

using namespace std;

class Videojuego {
public:
	Videojuego();
	Videojuego(string, string, UsuarioDesarrollador*);
	string getNombre();
	string getDescripcion();
	float getPuntajePromedio();
	UsuarioDesarrollador* getCreador();
	vector<Categoria*> getCategorias();
	map<Suscripcion*, CostoSuscripcion*> getSuscripciones();
	TotalHorasJugadas* getTotalHorasJugadas();
	void setPuntajePromedio(float);
	void setCategoria(Categoria*);
	void setSuscripcion(Suscripcion*, CostoSuscripcion*);
	void setTotalHorasJugadas(TotalHorasJugadas*);
	~Videojuego();
private:
	string nombre;
	string descripcion;
	float puntajePromedio;
	TotalHorasJugadas* totalHorasJugadas; 
	UsuarioDesarrollador* creador;
	vector<Categoria*> categorias;
	map<Suscripcion*, CostoSuscripcion*> suscripciones;
};

#endif
