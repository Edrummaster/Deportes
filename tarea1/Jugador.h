#ifndef __JUGADOR_H_
#define __JUGADOR_H_

#include <vector>
#include <string>
using namespace std;

class 	Jugador{
	public:
		string nombre;
		int PartidasGanadas;
		bool estadoJugador;
	public:
		string obtenerNombre();
		void definirNombre();
		bool JugarPartida();
		bool moverPieza();
		string imprimirInfo();
		bool retirarse();
};

#endif