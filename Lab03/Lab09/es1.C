#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

void importaDaFile(int, double[]);

int main(){

    int n;
    ifstream filein;
    double *arr;
    double somma = 0;
    double media;
    double stdev;

    
    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab09_20251202/misure.dat");
        if(filein.fail()){
            cout << "errore apertura file" << endl;
            return -1;
    }

    filein >> n;

    arr = new double[n];

    for (int i=0; i<n; i++){
        filein >> arr[i];
        cout << arr[i] << endl;
        somma += arr[i];
    }

    cout << "media = " << (double)somma/n << endl;

    media = 1.0*somma/n;


    for (int i=0; i<n; i++){
        stdev += pow(arr[i]-media,2);
    }

    cout << "dev. standard = " << sqrt(stdev/2) << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}