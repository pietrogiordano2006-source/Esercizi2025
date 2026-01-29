#include <iostream>

using namespace std;

int main(){

    int a[30];
    int somma = 0;
    int quanti;

    do{
        cout << endl << "Quanti valori vuoi inserire? ";
        cin >> quanti;
    }while(quanti > 30 || quanti < 0);

    for (int i=0; i < quanti; i++){
        cout << endl << "inserisci voto ";
        cin >> a [i];

        if (a[i] >= 18 && a[i] <= 31){
            somma = somma + a [i];
        }

        else {
            cout << "voto non valido" << endl;
            i = i - 1;
        }
    }

    for (int i=0; i < quanti; i++){
        cout << endl << "voto numero " << i+1 << ": " << a[i];
    }
    
    cout << endl << endl << (float)somma/quanti << endl;

    return 0;

}