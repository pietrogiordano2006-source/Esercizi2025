#include <iostream>
#include <iomanip>


using namespace std;

#define CAMPO 10

int main(){

    int conta=0;
    int a [CAMPO];
    int arev [CAMPO];
    int ac;

    cout << "inserisci valore " << 1 << ": ";
    cin >> ac;

    while (ac!=0 && conta<10){
        cout << "inserisci valore " << conta+2 << ": ";

        a[conta++]=ac;  
        cin >> ac;
    }

    for (int i=0; i<conta; i++){
        arev [i]= a [conta-i-1];
    }

   
    for (int i=0; i<conta; i++){
        cout << "valore numero " << i+1 << ": " << arev[i] << endl;
    }



    return 0;

}