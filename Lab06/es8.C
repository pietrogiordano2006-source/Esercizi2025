#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

void scambiaArray (int*, int, int);

int main(){

    int a[5];
    int v1;
    int v2;

    for (int i=0; i<5; i++){
        a[i]=i;
    }

    int *p = a;
    
    for (int i=0; i<5; i++){
        cout << i << ": " << a[i] << endl;
    }

    cout << "posizioni da scambiare: ";
    cin >> v1 >> v2;

    scambiaArray (p, v1, v2);

    for (int i=0; i<5; i++){
        cout << i << ": " << a[i] << endl;
    }

    return 0;
}


void scambiaArray (int *p, int v1, int v2){
    
    int appo;

    appo = p[v1];
    p[v1] = p[v2];
    p[v2] = appo;

}