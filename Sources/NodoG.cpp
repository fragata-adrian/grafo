#include "./Headers/NodoG.h"

NodoG::NodoG(string nombreCiudad, int cantAristas)
{
    ciudad = nombreCiudad;
    listaAristas = new Arista[cantAristas];
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

string NodoG::verAristas()
{
    for(int i=0; i<numAristas; i++){
        Arista arista = *(listaAristas+i);
        cout << arista.obtenerOrigen().obtenerCiudad()  << " -> " << arista.obtenerDestino().obtenerCiudad() << " = " << arista.obtenerDistancia();
    }
}

void NodoG::agregarArista(NodoG* nodoOrigen, NodoG* nodoDestino, double distancia)
{
    Arista* guardar = (listaAristas + numAristas);
    
    guardar->cambiarOrigen(nodoOrigen);
    guardar->cambiarDestino(nodoDestino);
    guardar->cambiarDistancia(distancia);
}

