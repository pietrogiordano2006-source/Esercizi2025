#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int ricercaLineare(int v[], int size, int used, int elem);


int main(){

    int a[7]={1,2,3,4,5};
    int b;
    int used=5;
    const int SIZE=7;
    int pos;

    pos = ricercaLineare(a, SIZE, used, 5);

    cout << pos << endl;

    return 0;

}


int ricercaLineare(int v[], int size, int used, int elem){

    int pos=0;

    while (v[pos]!=elem && pos<=used){
        pos++;
    }

    if(pos>used) return -1;
    else return pos;
}