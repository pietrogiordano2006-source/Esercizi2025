#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibVettoriR2/libVettoriR2.h"

using namespace std;

void misuraPi(double l, int npoints, int nmeas, double stat[2]);
double rilevazionePi (vettoreR2[], int);


int main(){

    int nmis;
    double l;
    const int npoints = 100;
    double stat[2];

    cout <<"imposta il numero di misure:";
    cin >> nmis;
    cout<< endl;

    cout <<"imposta il lato del quadrato:";
    cin >> l;
    cout<< endl;

    misuraPi(l, npoints, nmis, stat);
        cout << "pi stimato = " << stat[0] << endl;
        cout << "deviazione = " << stat[1];
    cout << endl;

    return 0;
}

void misuraPi(double l, int npoints, int nmeas, double stat[2]){

    double pi[nmeas];
    vettoreR2 punto[npoints];
    double somma = 0;
    double sommaDev = 0;

    for (int i=0; i<nmeas; i++){
        
        for (int i=0; i<npoints; i++){
            punto[i][0] = randUnif(0.0, l);
            punto[i][1] = randUnif(0.0, l);
        }

        pi[i] = rilevazionePi(punto, npoints);

        somma += pi[i];
    }

    stat[0] = somma/nmeas;

    for (int i=0; i<nmeas; i++){
        sommaDev += pow((pi[i]-stat[0]), 2);
    }

    stat[1] = sqrt(sommaDev/nmeas);

}



double rilevazionePi (vettoreR2 vet[], int nV){

    int vI = 0;

    for (int i=0; i<nV; i++){
        if (modulo(vet[i])<1) vI++;
    }

    return 4.0*vI/nV;

}
