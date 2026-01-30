#include <iostream>
#include <iomanip>
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Lab08/LibArrayInt/LibArrayInt.h"
#include "/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Librerie/LibCasuali/libCasuali.h"

using namespace std;

int main(){
    
    const int SIZE=50;
    int a[SIZE];
    int used=50;
    int ret;

    for (int i=0; i<50; i++){
        a[i]=randUnif(int(-20), int(20));
        cout << i+1 << ": " << a[i] << endl;
    }
    
    int j=0;
    while (j<used){
        if (a[j]<0){
            ret=eliminaShift(a, SIZE, used, j);
            if (ret>=0){
                used=ret;
            }
        }
        else j++;
        
    }

    for (int i=0; i<used; i++){
        cout << i+1 << ": " << a[i] << endl;
    }

}