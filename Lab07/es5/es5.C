#include <iostream>
#include "vettoriR2.h"

using namespace std;

int main(){

    double vett1[2] ={1.,2.};
    double vett2[2] = {7. ,5.};
    double add[2];
    double ps;
    double mod;
    double sott[2];
    double ang;
    double vett3[2];
    bool ort;

    somma(vett1, vett2, add);
    cout << endl << add[0] << "; " << add[1] << endl;

    ps = prodScalare(vett1, vett2);
    cout << "ps: " << ps << endl;

    mod = modulo(vett1);
    cout << "modulo v1: " << mod << endl;

    sottrazione(vett1, vett2, sott);
    stampa(sott);

    ang = angolo(vett1);
    cout << "angolo v1 con asse x: " << ang << endl;

    componenti(1., 0.78f, vett3);
    stampa(vett3);

    ort = ortogonali(vett1, vett2);
    if (ort){
        cout << "ortogonali" << endl;
    }
    else{
        cout << "non ortogonali" << endl;
    }

    return 0;
}