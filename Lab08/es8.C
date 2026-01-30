#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibVettoriR2/libVettoriR2.h"

using namespace std;

double montecarloSin(double, double, int);

int main(){

    int n;
    const double h = 1.0;
    const double l = 3.14;
    double intDefSen;

    cout << "numero punti: ";
    cin >> n ;
    cout << endl;

    intDefSen = montecarloSin(l, h, n);

    cout << intDefSen << endl;

    return 0;
}


double montecarloSin(double lenght, double height, int est){

    vettoreR2 punto[est];
    int conta = 0;

    for (int i=0; i<est; i++){
        punto[i][0] = randUnif(0.0, lenght);
        punto[i][1] = randUnif(0.0, height);
        
        if (punto[i][1]<sin(punto[i][0])) conta+=1;
    }


    return (1.0*conta/est)*(1.0*lenght*height);


}