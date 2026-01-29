#include <iostream>

using namespace std;

//Dichiarazione

bool isInRange(float, float, float);

//Programma driver: consente a noi di verificare il corretto
//funzionamento delle funzioni
int main(){

    //variabili
    float min;
    float max;
    float val;
    bool check;

    //definizione variabili
    cout << "inserisci valore :";
    cin >> val;

    cout << "definisci intervallo: ";
    cin >> min >> max;

    check = isInRange(min, max, val);

    if (check==true){
        cout << "vero" << endl;
    }
    else {
        cout <<"falso" << endl;
    }

    return 0;

}

bool isInRange(float mini, float maxi, float valo){

   if (valo>=mini && valo<=maxi) return true;

   else return false;

}