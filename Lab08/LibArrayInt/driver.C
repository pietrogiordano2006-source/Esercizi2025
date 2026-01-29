#include "LibArrayInt.h"
#include <iostream>

using namespace std;


int main(){

    int a[7]={1,2,3,4,5};
    const int SIZE=7;
    int used=5;
    int ret;

    stampaArray(a, used);

    ret=appendi(a, SIZE, used, 7);
    if (ret>=0){
        used=ret;
    }

    stampaArray(a, used);

    ret=inserisci(a, SIZE, used, 1, 11.f);
    if (ret>=0){
        used=ret;
    }

    stampaArray(a, used);

    ret=eliminaShift(a, SIZE, used, 4);
    if (ret>=0){
        used=ret;
    }

    stampaArray(a, used);

    ret=eliminaSwap(a, SIZE, used, 4);
    if (ret>=0){
        used=ret;
    }

    stampaArray(a, used);

    
    return 0;

}