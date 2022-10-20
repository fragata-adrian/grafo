#include "Grafo.cpp"
#include "Arista.cpp"
#include "NodoG.cpp"
#include <windows.h>

//int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevIns, LPSTR lpszArgument, int iShow)
int main()
{

    NodoG* bsas = new NodoG("Buenos Aires");
    NodoG* cord = new NodoG("Cordoba");
    NodoG* ros = new NodoG("Rosario");
    
    bsas->agregarArista(bsas, cord, 1200);
    bsas->agregarArista(bsas, ros, 3000);

    ros->agregarArista(ros, bsas,3000);

    cord->agregarArista(cord, ros, 200);
    
    Grafo* grafo = new Grafo();

    grafo->agregarNodo(bsas);
    grafo->agregarNodo(cord);
    grafo->agregarNodo(ros);
    grafo->verNodos();

    grafo->eliminarNodo("Cordoba");
    

    cout << "------------Grafo luego de borrar--------------"<<endl;
    grafo->verNodos();
    
    grafo->~Grafo();
    return 0;
}