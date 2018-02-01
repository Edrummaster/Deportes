#include "Deportes.h"
#include "jugador.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Deportes::Deportes(){
	clasificacion= ' ';
	resultadoPartida = ' ';
}

void Deportes::ConvocarJugadores(){
	int numero;
	string jugador;
	cout<<"ingrese numero de jugadores por campeonato"<<endl;	
	cin>>numero;
	for(int i=0; i<numero; i++){
		cout<<"ingrese nombre de jugador"<<endl;
		cin>>jugador;
		jugadores.push_back(jugador);
		//Jugador::definirNombre(jugador);
	}
}

bool Deportes::iniciarPartida(Jugador::Jugador){
	return true;
}
	
bool Deportes::finalizarPartida(){
	return false;
}

void Deportes::EliminarJugador(Jugador::Jugador){
	string temp;
	for(int i=0; i<jugadores.size(); i++){
		str1.compare(6,5,"apple") == 0
	}
	jugadores.
}
		bool finalizarCampeonato();
		*/