#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

int main(){

    ifstream input;
    float a[20];
    float appo;
    int nmis;
    float somma=0;
    double media;
    double stdev;

    input.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab05_20251028/misure.dat");

    if (input.fail()){
        cout << "file corrotto";
        return -1;
    }

    input >> nmis;

    for (int i=0; i<nmis; i++){
        input >> a[i];
    }

    input.close();

    for (int i=0; i<nmis; i++){
        cout << left;
        if (i%5 == 0 && i != 0) cout << endl;
        cout << setw (10) << a[i];
        
        
    }
    cout << endl;

    for (int i=0; i<nmis; i++){
        somma += a[i];
    }

    cout << "media = " << (double)somma/nmis << endl;

    media = (double)somma/nmis;


    for (int i=0; i<nmis; i++){
        stdev += pow(a[i]-media,2);
    }

    cout << "dev. standard = " << sqrt(stdev/2) << endl;


    return 0;

}




























