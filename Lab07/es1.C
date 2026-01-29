#include <iostream>
#include <iomanip>

using namespace std;

//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(float v[], int size, int n, float elem);

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(float v[], int size, int n, int pos, float elem);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(float v[], int size, int n, int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(float v[], int size, int n, int pos);

void stampaArray(float v[], int n);

int main(){

    float a[7]={1.f,2.f,3.f,4.f,5.f};
    const int SIZE=7;
    int used=5;
    int ret;

    stampaArray(a, used);

    ret=appendi(a, SIZE, used, 7.0f);
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


int appendi(float v[], int size, int n, float elem){

    if(n<size){
        v[n]=elem;
        return n+1;
    }
    else{
        cout << "posizione non valida";
        return -1;
    }

}


int inserisci (float v[], int size, int n, int pos, float elem){

    if (pos<0 || pos>n){
        cout << "posizione non valida" << endl;
        return -1;
    }
    if (n>=size){
        cout << "array pieno"<< endl;
        return -2;
    }
    else{

        for (int i=n; i>pos; i--){
            v[i]=v[i-1];
        }

        v[pos]=elem;
        return n+1;
    }


}


int eliminaShift(float v[], int size, int n, int pos){

    if (pos<0 || pos>=n){
        cout << "posizione non valida" << endl;
        return -1;
    }
    else{
        for (int i=pos; i<n-1; i++){
            v[i]=v[i+1];
        }
        return n-1;
    }


}


int eliminaSwap(float v[], int size, int n, int pos){

    if(pos>=0 && pos<n-1){
        v[pos]=v[n-1];
        return n-1;
    }
    else return -1;

}


void stampaArray(float v[], int used){
    
    cout << "Stampo Array!" << endl;
    
    cout << "grandezza array: " << used << endl;
    
    for (int i=0; i<used; i++){
        cout << "elemento in posizione " << i << ": " << v[i] << endl;
    }
    cout << "fine array" << endl;

}