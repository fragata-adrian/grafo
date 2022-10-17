#include "Grafo.cpp"
#include "Arista.cpp"
#include "NodoG.cpp"

using namespace std;

int main()
{
    NodoG* bsas = new NodoG("Buenos Aires", 0);
    NodoG* cord = new NodoG("Cordoba", 0);
    NodoG* ros = new NodoG("Rosario", 0);
    
    bsas->agregarArista(bsas, cord, 1200);
    bsas->agregarArista(bsas, ros, 3000);
    
    Grafo* grafo = new Grafo(bsas);

    grafo->cambiarPrimero(bsas);
    grafo->verNodos();
    
    return 0;
}