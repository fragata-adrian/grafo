#ifndef GRAFO_H_INCLUDED
#define GRAFO_H_INCLUDED
#include "NodoG.h"

class Grafo
{
    private:
        NodoG* primero; // Puntero al primer nodo del grafo
        int numNodos; // Cantidad de nodos que contiene el grafo
    public:
        // Constructor
        Grafo();

        // Retorna el valor del atributo primero
        NodoG* obtenerPrimero();

        // Cambia el valor del atributo primero
        void cambiarPrimero(NodoG* nodo);

        // Hace un print por consola de los nodos y sus datos
        // que contiene el grafo.
        // PRE: Debe haber al menos un nodo. 
        void verNodos();

        // Elimina todos los nodos y sus aristas del grafo.
        void eliminarNodos();

        // Agrega un nodo al grafo
        void agregarNodo(NodoG* nodo);
};

#endif //GRAFO_H_INCLUDED