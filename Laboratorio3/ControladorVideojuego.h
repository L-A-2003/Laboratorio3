#ifndef CONTROLADORVIDEOJUEGO_H
#define CONTROLADORVIDEOJUEGO_H
#include<vector>
#include "InterfazControladorVideojuego.h"
#include "MetodoPago.h"
#include "Videojuego.h"
#include "DtVideojuego.h"
#include "DtSuscripcion.h"
#include "DtInfoVideojuego.h"
#include "DtCategoria.h"
#include "DtGenero.h"
#include "DtPlataforma.h"
#include "TipoSuscripcion.h"

class ControladorVideojuego : public InterfazControladorVideojuego {
public:
	ControladorVideojuego* getInstancia();
	
	vector<DtVideojuego*> listarVideojuegos();
	vector<DtVideojuego*> listarVideojuegosSuscripciones();
	vector<string> listarNombresVideojuegos();
	void ingresarInformacionVideojuego(DtVideojuego*);
	void ingresarDatosSuscripcion(DtSuscripcion*);
	void mostrarInformacionVideojuego();
	void confirmarCrearVideojuego();
	void cancelarCrearVideojuego();
	void seleccionarVideojuego(string);
	void finalizarSuscribirseAVideojuego();
	void asignarPuntajeVideojuego(string, int);
	DtInfoVideojuego* mostrarInformacionVideojuego(string);
	float mostrarHorasTotalesJugadas();
	void cancelarEliminacion();
	void confirmarEliminacion();
	vector<string> listaCategorias();
	void agregarCategoria(DtCategoria*);
	void cancelarCategoria();
	void darAltaCategoria();
	vector<DtGenero*> obtenerCategoriasGenero();
	vector<DtPlataforma*> obtenerCategoriasPlataforma();
	vector<DtCategoria*> obtenerCategoriasAlternativas();
	void seleccionarCategoria(string);
	void cancelarSuscripcion();
	void ingresarTipoSuscripcion(TipoSuscripcion*);
	void ingresarMetodoPago(MetodoPago*);
	void cancelarCompra();
	void confirmarAltaSuscripcion();
private:
	ControladorVideojuego();
	ControladorVideojuego* instancia;
	vector<Videojuego*> videojuegos;
};

#endif

