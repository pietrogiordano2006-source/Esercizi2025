#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int appendi(float v[], int size, int n, float elem);
void stampaArray(float v[], int n);


int main(){

    float a[120];
    float b;
    int used=0;
    const int SIZE=120;
    ifstream filein;
    
    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab07_20251111/data.dat");
    if (filein.fail()){
        cout << "errore apertura file"<< endl;
        return -1;
    }


    while (!filein.eof()){
        filein>>b;
        used=appendi(a, SIZE, used, b);
    }
    
    filein.close();

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


void stampaArray(float v[], int used){
    
    cout << "Stampo Array!" << endl;
    
    cout << "grandezza array: " << used << endl;
    
    for (int i=0; i<used; i++){
        cout << "elemento in posizione " << i << ": " << v[i] << endl;
    }
    cout << "fine array" << endl;

}