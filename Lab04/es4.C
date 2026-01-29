#include <iostream>

using namespace std;

int main(){
    int nvoti;
    int voto;
    int somma = 0;

    cout << "quanti voti devi inserire? " << endl;
    cin >> nvoti;

    for (int i=0; i<nvoti; i++){
        cout << "inserisci voto " << i << endl;
        cin >> voto;

        if (18<=voto && voto){
            somma = somma + voto;
        }

        else {
            cout << "voto non valido" << endl;
            i = i - 1;
        }
    }

    cout << "la media è: " << (float)somma/nvoti << endl;

    return 0;
}