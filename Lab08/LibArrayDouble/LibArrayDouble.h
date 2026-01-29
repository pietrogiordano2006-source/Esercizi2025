#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(double v[], int size, int n, double elem);

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(double v[], int size, int n, int pos, double elem);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(double v[], int size, int n, int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(double v[], int size, int n, int pos);

void stampaArray(double v[], int n);