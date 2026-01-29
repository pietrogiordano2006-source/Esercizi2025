#include "LibArrayDouble.h"



int appendi(double v[], int size, int n, double elem){

    if(n<size){
        v[n]=elem;
        return n+1;
    }
    else{
        cout << "posizione non valida";
        return -1;
    }

}


int inserisci (double v[], int size, int n, int pos, double elem){

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


int eliminaShift(double v[], int size, int n, int pos){

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


int eliminaSwap(double v[], int size, int n, int pos){

    if(pos>=0 && pos<n){
        v[pos]=v[n-1];
        return n-1;
    }
    else return -1;

}


void stampaArray(double v[], int used){
    
    cout << "Stampo Array!" << endl;
    
    cout << "grandezza array: " << used << endl;
    
    for (int i=0; i<used; i++){
        cout << "elemento in posizione " << i << ": " << v[i] << endl;
    }
    cout << "fine array" << endl;

}