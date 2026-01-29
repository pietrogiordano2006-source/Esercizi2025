#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

int MCD (int, int);

int main(){
    
    int a;
    int b;
    int mcd=2;

    cin >> a >>b;

    if (a<1 || b<1){
        cout << "errore" << endl;
        return -1;
    }

    mcd = MCD (a, b);

    cout << "numeri: " << a << ", " << b << endl;
    if (mcd = -1){
        cout << "non esiste mcd" <<endl;
    }
    else {
        cout << "mcd: " << mcd << endl;
    }

    return 0;

}


int MCD (int v1, int v2){

    int mm=2;

    while ((v1%mm!=0 || v2%mm!=0) && mm<=v1){
        mm++;
    }
    
    if (mm=v1){
        return -1;
    }
    else return mm;

}

