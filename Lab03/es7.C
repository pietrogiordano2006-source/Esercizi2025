#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    while (a <=0){
        cout << endl << "scegli altro ";
        cin >> a;
    }
    cout << endl << "positivo" << endl;
    return 0;


}