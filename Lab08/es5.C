#include <iostream>
#include <fstream>
#include <iomanip>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibVettoriR2/libVettoriR2.h"

using namespace std;

double rilevazionePi (vettoreR2[], int);


int main(){

    const int nP = 200;
    vettoreR2 punto [nP];
    const double lati = 1;
    const double o = 0;
    ofstream fileout;
    double Pi;

    for (int i=0; i<nP; i++){
        punto[i][0] = randUnif(o, lati);
        punto[i][1] = randUnif(o, lati);
    }

    fileout.open("/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Lab08/vettoriEs5.dat");
    if(fileout.fail()){
        cout << "errore apertura file" << endl;
        return -1;
    };

    fileout << "#vettori" << endl;
    fileout << setw(18) << "#x" << setw(17) << "y" << endl;
    for (int i=0; i<nP; i++){
        fileout << setw(18) << punto[i][0] << setw(18) << punto[i][1] << endl;
    }

    fileout.close();

    Pi = rilevazionePi(punto, nP);

    cout << Pi << endl;


return 0;
}


double rilevazionePi (vettoreR2 vet[], int nV){

    double mod[nV];
    int vI = 0;
    double area4;
    
    for (int i=0; i<nV; i++){
        mod[i] = modulo(vet[i]);
    }

    for (int i=0; i<nV; i++){
        if (mod[i]<1) vI++;
    }

    area4=1.0*vI/nV;

    return 4.0*area4;

}
