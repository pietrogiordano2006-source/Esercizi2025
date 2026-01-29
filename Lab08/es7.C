#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibVettoriR2/libVettoriR2.h"

using namespace std;

    void misuraPi(double l, int npoints, int nmeas, double stat[2]);
    double rilevazionePi (vettoreR2[], int);
    typedef double stat[2];


int main(){

    int nmis = 10;
    const double l = 1.0;
    const int npoints = 100;
    stat dati[10];
    ofstream fileout;

    fileout.open("/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Lab08/piMontecarlo.dat");
    if(fileout.fail()){
        cout << "errore apertura file" << endl;
        return -1;
    }

    fileout << "# mc.dat" << endl;
    fileout << setw(18) << "# M" << setw(18) << "media" << setw(18) << "stddev" << endl;

    while(nmis<100){
        int i=0;
        
            misuraPi(l, npoints, nmis, dati[i]);

            fileout << setw(18) << nmis << setw(18) << dati[i][0] << setw(18) << dati[i][1] << endl;
        
            nmis +=10;

        i++;
    }

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