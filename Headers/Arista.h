#ifndef ARISTA_H_INCLUDED
#define ARISTA_H_INCLUDED
#include "NodoG.h"

class NodoG;
class Arista 
{
    private:
        NodoG* origen; // Puntero al nodo origen de la arista
        NodoG* destino; // Puntero al nodo destino de la arista
        double distancia; // Distancia del nodo 'origen' al nodo 'destino'
        Arista* siguiente; // Puntero a una siguiente arista perteneciente al nodo origen
    public:
        // Constructores
        Arista();
        Arista(NodoG* nodoOrigen, NodoG* nodoDestino, double distanciaEntre);

        // Retorna el valor del atributo origen
        NodoG* obtenerOrigen();

        // Cambia el valor del atributo origen
        void cambiarOrigen(NodoG* nuevoOrigen);

        // Retorna el valor del atributo destino
        NodoG* obtenerDestino();

        // Cambia el valor del atributo destino
        void cambiarDestino(NodoG* nuevoDestino);

        // Retorna el valor del atributo distancia
        double obtenerDistancia();

        // Cambia el valor del atributo distancia
        void cambiarDistancia(double distancia);
        
        // Retorna el valor del atributo siguiente
        Arista* obtenerSiguiente();
        
        // Cambia el valor del atributo siguiente
        void cambiarSiguiente(Arista* nuevoSiguiente);
};

#endif // ARISTA_H_INCLUDED