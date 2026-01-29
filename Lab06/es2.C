#include <iostream>

using namespace std;

//Dichiarazione

#define min -5
#define max 5
#define size 10
bool isInRange(float, float, float);
void stampa(int, float[size]);

//Programma driver: consente a noi di verificare il corretto
//funzionamento delle funzioni
int main(){

    //variabili
    float arr[10];
    float val;
    bool check;
    char conf;
    int CONTA=0;

    //loop di controllo
    do{
        cout << "inserisci valore: ";
        cin >> val;

        //controllo
        if (isInRange(min, max, val)){
            arr[CONTA]=val;
            CONTA++;
        }
        else{
            cout << "valore non valido"<< endl;
        }

        cout << "vuoi continuare a inserire dati?";
        cin >> conf;

    }while ((conf=='s' || CONTA<1) && CONTA<10);
    
    cout << "numero dati: " << CONTA << endl;

    stampa (CONTA, arr);

}




bool isInRange(float mini, float maxi, float valo){

   if (valo>=mini && valo<=maxi) return true;

   else return false;

}


void stampa(int nval, float val[size]){

    for (int i=0; i<nval; i++){
        cout << val[i] << endl;
    }

}