#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int conta = 0;
    ifstream filein;
    double appo;
    int *arr;
    int somma = 0;
    double media;

    
    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab09_20251202/voti.dat");
        if(filein.fail()){
            cout << "errore apertura file" << endl;
            return -1;
    }

    while (!filein.eof()){
        filein >> appo;
        conta++;
    }

    cout << conta << endl;
    filein.close();

    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab09_20251202/voti.dat");
        if(filein.fail()){
            cout << "errore apertura file" << endl;
            return -1;
    }

    arr = new int[conta];

    for (int i=0; i<conta; i++){
        filein >> arr[i];
        somma += arr[i];
    }

    delete[] arr;
    arr = nullptr;

    media = 1.0*somma/conta;
    cout << media << endl;

    filein.close();

    return 0;
}