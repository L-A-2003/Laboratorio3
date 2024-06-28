#ifndef INTERFAZCONTROLADORVIDEOJUEGO_H
#define INTERFAZCONTROLADORVIDEOJUEGO_H
#include<vector>
#include<string>
#include "MetodoPago.h"
#include "Videojuego.h"
#include "DtVideojuego.h"
#include "DtSuscripcion.h"
#include "DtInfoVideojuego.h"
#include "DtCategoria.h"
#include "DtGenero.h"
#include "DtPlataforma.h"
#include "TipoSuscripcion.h"

using namespace std;

class InterfazControladorVideojuego {
public:
	virtual ~InterfazControladorVideojuego() = default;
	
	virtual vector<DtVideojuego*> listarVideojuegos() = 0;
	virtual vector<DtVideojuego*> listarVideojuegosSuscripciones() = 0;
	virtual vector<string> listarNombresVideojuegos() = 0;
	virtual void ingresarInformacionVideojuego(DtVideojuego*) = 0;
	virtual void ingresarDatosSuscripcion(DtSuscripcion*) = 0;
	virtual void mostrarInformacionVideojuego() = 0;
	virtual void confirmarCrearVideojuego() = 0;
	virtual void cancelarCrearVideojuego() = 0;
	virtual void seleccionarVideojuego(string) = 0;
	virtual void finalizarSuscribirseAVideojuego() = 0;
	virtual void asignarPuntajeVideojuego(string, int) = 0;
	virtual DtInfoVideojuego* mostrarInformacionVideojuego(string) = 0;
	virtual float mostrarHorasTotalesJugadas() = 0;
	virtual void cancelarEliminacion() = 0;
	virtual void confirmarEliminacion() = 0;
	virtual vector<string> listaCategorias() = 0;
	virtual void agregarCategoria(DtCategoria*) = 0;
	virtual void cancelarCategoria() = 0;
	virtual void darAltaCategoria() = 0;
	virtual vector<DtGenero*> obtenerCategoriasGenero() = 0;
	virtual vector<DtPlataforma*> obtenerCategoriasPlataforma() = 0;
	virtual vector<DtCategoria*> obtenerCategoriasAlternativas() = 0;
	virtual void seleccionarCategoria(string) = 0;
	virtual void cancelarSuscripcion() = 0;
	virtual void ingresarTipoSuscripcion(TipoSuscripcion*) = 0;
	virtual void ingresarMetodoPago(MetodoPago*) = 0;
	virtual void cancelarCompra() = 0;
	virtual void confirmarAltaSuscripcion() = 0;
		
private:
};

#endif

