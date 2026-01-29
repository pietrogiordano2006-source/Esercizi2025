#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

float media(float v[], int);
float devstd(float v[], int);

int main(){

    float dati[5];
    float appo;

    for (int i=0; i<5; i++){
        cin >> appo;
        dati [i] = appo;
    }

    cout << media (dati, 5) << endl;

    cout << devstd (dati, 5) << endl;

    return 0;
}


float media(float dat1[], int ndati){

    float somma=0;

    for (int i=0; i<ndati; i++){
        somma+=dat1[i];
    }

    return (somma/ndati);
}



float devstd(float dat2[], int ndati){
    
    float somma=0;
    float m;
    float dev=0;

    for (int i=0; i<ndati; i++){
        somma += dat2[i];
    }

    m = (somma/ndati);

    for (int i=0; i<ndati; i++){
        dev+=pow((dat2[i]-m), 2);
    }

    return sqrt(dev/ndati);
}