#include <iostream>

using namespace std;

int main(){
    int a;
    float b;

    cout << endl << "inserisci dato: ";
    cin >> a;
    if (a >= 0){
        if (a%2 == 0){
            cout << endl << "positivo pari";
        }
        else {
            cout << endl << "positivo dispari";
        }
    }
    else {
        if (a%2 == 0){
            cout << endl << "negativo pari";
        }
        else {
            cout << endl << "negativo dispari" <<endl;
        }
    }
    
}