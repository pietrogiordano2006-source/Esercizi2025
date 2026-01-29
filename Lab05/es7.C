#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int primi[50];
    primi[0]=2;
    int n=3;
    

    int pos=1;

    while (pos<50){

        bool primo=true;
        int i=0;

        while (i<pos && primo){
        
            if (n % primi[i] == 0){
               primo=false;
            }
            i++;

        }

        if (primo){
                primi[pos]=n;
                pos++;
        }

        n++;

    }
 

    for (int i=0; i<pos; i++){
        cout << primi[i] << endl;
    }

    return 0;
}
