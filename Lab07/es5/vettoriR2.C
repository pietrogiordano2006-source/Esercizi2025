#include "vettoriR2.h"


void somma(double v1[], double v2[], double res[]){
    for(int i=0; i<DIM; i++) res[i] = v1[i]+v2[i];
    //Non restituisce niente perche' "esporta" il risultato con res
}


double prodScalare(double v1[],double v2[]){
    double accu = 0.;

    for(int i=0; i<DIM; i++) accu += v1[i] * v2[i];

    return accu;
}

/*Restituisce il modulo (norma) di un vettore v*/
double modulo(double v[]){
    return sqrt(prodScalare(v,v));
}

/*....altre funzioni/procedure...*/
void sottrazione(double v1[], double v2[], double res[]){
    for (int i=0; i<DIM; i++) res[i] = v1[i]+v2[i];
}


double angolo(double v[]){
    return atan(v[2]/v[1]);
}


void componenti(double r, double a, double res[]){
    res[0]=cos(a)*r;
    res[1]=sin(a)*r;
}


bool ortogonali(double v1[],double v2[]){
    double ps;
    ps = prodScalare(v1, v2);
    if (ps=0) return true;
    else return false;
}


void stampa(double v[]){
    for (int i=0; i<DIM; i++){
        cout << v[i] << ";";
    }
    cout << endl;
}


void lettura(double v[]) {
    cout << "Inserisci la componente x: ";
    cin >> v[0];
    cout << "Inserisci la componente y: ";
    cin >> v[1];
}