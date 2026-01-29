#include <iostream>

using namespace std;

int main(){
    char c;
    char d;
    char e;
    cout << endl << "inserisci carattere. ";
    cin >> c;
    if (c >= 97 && c <= 122){
        e = c - 32;
        cout << endl << e << endl;
    }
    else if (c >= 65 && c <= 90){
        d = c + 32;
        cout << endl << d << endl;
    }
    else {
        cout << endl << "altro" << endl;
    }
    return 0;
}