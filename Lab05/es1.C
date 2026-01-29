#include <iostream>
#include <iomanip>


using namespace std;

#define CAMPO 10

int main(){

    int conta=0;
    int a [CAMPO];
    int ac;

    cout << "inserisci valore " << 1 << ": ";
    cin >> ac;

    while (ac!=0 && conta<10){
        cout << "inserisci valore " << conta+2 << ": ";

        a[conta++]=ac;  
        cin >> ac;
    }

    for (int i=0; i<conta; i++){
        cout << "valore numero " << i+1 << ": " << a[i] << endl;
    }



    return 0;

}