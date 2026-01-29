#include <iostream>
#include <iomanip>


using namespace std;

#define CAMPO 10

int main(){

    bool pal=true;
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

    //for (int i=0; i<conta; i++){
    //    arev [i]= a [conta-i-1];
   //}

    
    
        int j=0;

        while (pal && j<conta){
            cout << "i = " << j << endl;
            
            if (a[j] != a[conta-j-1]){
                pal = false;
            }

            j++;
        }
    

    if (pal){
        cout << "palindromo" << endl;
    }
    else{
        cout << "non palindromo" << endl;
    }


    return 0;

}