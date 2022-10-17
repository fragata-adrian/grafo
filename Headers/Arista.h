#ifndef ARISTA_H_INCLUDED
#define ARISTA_H_INCLUDED
#include "NodoG.h"

class Arista 
{
    private:
        NodoG* nodoOrigen;
        NodoG* nodoDestino;
        double distancia;
    public:
        // Constructor
        Arista();
        Arista(NodoG* nodoOrigen, NodoG* nodoDestino, double distancia);

        NodoG obtenerOrigen();

        void cambiarOrigen(NodoG* nodo);

        NodoG obtenerDestino();

        void cambiarDestino(NodoG* nodo);

        double obtenerDistancia();

        void cambiarDistancia(double distancia);
};

#endif // ARISTA_H_INCLUDED