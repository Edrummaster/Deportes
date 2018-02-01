#ifndef __DEPORTES_H_
#define __DEPORTES_H_

#include <vector>
#include <string>
#include "Jugador.h"
#include <iostream>
using namespace std;

class Deportes{
	public:
		vector<string> jugadores;
		string clasificacion;
		string resultadoPartida;
	public:
		Deportes();
		void ConvocarJugadores();
		/*
		bool iniciarPartida(Jugador::Jugador);
		bool finalizarPartida();
		void EliminarJugador(Jugador::Jugador);
		bool finalizarCampeonato();
		*/
};

#endif