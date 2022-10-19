#include "../Headers/Grafo.h"

Grafo::Grafo()
{
    numNodos = 0;
}

NodoG* Grafo::obtenerPrimero()
{
    return primero;
}

void Grafo::cambiarPrimero(NodoG* nuevoPrimero)
{
    primero = nuevoPrimero;
}

void Grafo::verNodos()
{   
    NodoG* aux = primero;
    for(int i=0; i<=numNodos; i++){
        aux->verDatos();
        aux = aux->obtenerSiguiente();
    }
}

void Grafo::eliminarNodos()
{
    while (numNodos != 0){
        NodoG* borrar = primero;
        NodoG* aux = borrar->obtenerSiguiente();
        borrar->eliminarAristas();
        delete borrar;
        primero = aux;
        numNodos--;
    }
}

void Grafo::eliminarNodo(string ciudad) 
{
    if(primero->obtenerCiudad() == ciudad){
        NodoG* borrar = primero;
        primero = borrar->obtenerSiguiente();
        delete borrar;
        numNodos--;
        cout << "Se eliminó el nodo que representaba a " << ciudad << endl;
    }
    else if(numNodos > 1){
        NodoG* anterior = primero;
        
        for (int i=1; i<numNodos; i++){
            NodoG* actual = anterior->obtenerSiguiente();

            if(actual->obtenerCiudad() == ciudad){
                anterior->cambiarSiguiente(actual->obtenerSiguiente());
                delete actual;
                numNodos--;
                cout << "Se eliminó el nodo que representaba a " << ciudad << endl;
            }
            else {
                cout << "No se encontró el nodo que representa a " << ciudad << endl;
            }
        }
    }
    else {
        cout << "No se encontró el nodo que representa a " << ciudad << endl;
    }
}

void Grafo::agregarNodo(NodoG* nodo)
{
    NodoG* aux = primero;
    
    for (int i=0; i<numNodos; i++) {
        aux = aux->obtenerSiguiente();
    }

    aux->cambiarSiguiente(nodo);

    numNodos++;
}