#include "../Headers/NodoG.h"
#include <iostream>

NodoG::NodoG(string nombreCiudad, int cantAristas)
{
    ciudad = nombreCiudad;
    if (cantAristas!=0){
        listaAristas = new Arista[cantAristas];
    }
    int numAristas = 0;
}

string NodoG::obtenerCiudad()
{
    return ciudad;
}

void NodoG::cambiarCiudad(string nombreCiudad)
{
    ciudad = nombreCiudad;
}

void NodoG::verAristas()
{
    
        Arista* arista = listaAristas;
        cout << arista->obtenerOrigen()->obtenerCiudad()  << " -> " << arista->obtenerDestino()->obtenerCiudad() << " = " << arista->obtenerDistancia()<<endl;
}

void NodoG::agregarArista(NodoG* nodoOrigen, NodoG* nodoDestino, double distancia)
{
    Arista* guardar = listaAristas;
    
    guardar->cambiarOrigen(nodoOrigen);
    guardar->cambiarDestino(nodoDestino);
    guardar->cambiarDistancia(distancia);
    numAristas++;
}

