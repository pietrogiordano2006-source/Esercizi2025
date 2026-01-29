#include <iostream>
#include <fstream>
#include <iomanip>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"

using namespace std;

#define N 50

float leggeOraria(float v, float x0, float time);

int main(){

    const float x0=1.2;
    const float devstd=0.2;
    const float dt=0.5;
    const float v=3.2;
    const int nmis=50;
    ofstream fileout;
    float t=0;
    float mis[N];

    fileout.open("/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Lab08/rilevazioni.dat");
    if(fileout.fail()){
        cout << "errore apertura file" << endl;
        return -1;
    }

    fileout << "rilevazioni.dat";
    fileout << endl << '#' << setw(18) << "time" << setw(18) << "pos" << endl;
    for (int i=0; i<N; i++){
        fileout << setw(18) << dt*i << setw(18) << leggeOraria(v, 0, i*dt) + randGauss(0, devstd) << endl;
    }


    return 0;


}


float leggeOraria(float v, float x0, float time){
    return (x0+v*time);
}