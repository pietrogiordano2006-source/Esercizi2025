#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

void scambia (int*, int*);

int main(){

    int v1;
    int v2;

    cin >> v1 >> v2;
    cout << "v1: " << v1 << endl; 
    cout << "v2: " << v2 << endl; 

    scambia (&v1, &v2);


    cout << "v1: " << v1 << endl; 
    cout << "v2: " << v2 << endl; 

    return 0;

}


void scambia (int *v1, int *v2){

    int appo;
    
    appo = *v1;
    *v1 = *v2;
    *v2 = appo;

}