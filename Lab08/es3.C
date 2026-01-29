#include <iostream>
#include <fstream>
#include <iomanip>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibVettoriR2/libVettoriR2.h"

using namespace std;

int main(){

    vettoreR2 appo;
    vettoreR2 rif={2.5,5.5};
    const int SIZE=200;
    ifstream filein;
    int conta=0;
    double modMax, projMax;
    vettoreR2 vModMax, vprojMax;

    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab08_20251125/vettoriPiano.dat");
    if(filein.fail()){
        cout << "errore apertura file" << endl;
        return -1;
    }

    filein >> appo[0] >> appo[1];

    while(!filein.eof()){
        
        conta++;

        if (conta==1){
            modMax=modulo(appo);
            vModMax[0]=appo[0];
            vModMax[1]=appo[1];

            projMax=prodScalare(rif, appo);
            vprojMax[0]=appo[0];
            vprojMax[1]=appo[1];
        }
        else{
            double appoDouble;

            appoDouble = modulo(appo);
            if(appoDouble>modMax){
                modMax=appoDouble;
                vModMax[0]=appo[0];
                vModMax[1]=appo[1];
            }

            appoDouble = prodScalare(rif, appo);
            if(appoDouble>projMax){
                projMax=appoDouble;
                vprojMax[0]=appo[0];
                vprojMax[1]=appo[1];
            }


        }

        filein >> appo[0] >> appo[1];

    }

    cout << "numero vettori: " << conta << endl;

    cout << "mod max: " << modMax << endl;
    cout << "v mod max: " << vModMax[0] << ";" << vModMax[1] << endl;

    cout << "proj max: " << projMax << endl;
    cout << "v pro max: " << vprojMax[0] << ";" << vprojMax[1] << endl;


    return 0;
}

