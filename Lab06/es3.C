#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

bool isInRange(float, float, float);

int main(){

    int ndat;
    float appo;
    float dati[100];
    int nbuoni=0;
    int nscart=0;
    bool check;
    ifstream filein;
    ofstream fileout;

    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab06_20251104/dataTake.dat");

    //check file
    if(filein.fail()){
        cout << endl << "Errore file input!" << endl;
        return -1;
    }

    //stampo e ignoro primo dato (richiesta)
    filein>>ndat;
    filein.ignore (100, '\n');
    cout << "numero dati: " << ndat << endl;

    //inserisco in array
    while ((nbuoni+nscart)<ndat){
        filein>>appo;

        if (isInRange(-3*1.4, 3*1.4, appo)){
            dati[nbuoni]=appo;
            nbuoni++;
        }

        else nscart++;

        filein.ignore (100, '\n');

    }

    //chiudo filein
    filein.close();

    //apro il file su cui stampo e controllo
    fileout.open("../Lab06/cleanData.dat");
    if(fileout.fail()){
        cout << endl << "Errore file output!" << endl;
        return -1;
    }

    //traseferisco da array a fileout
    for (int i=0; i<nbuoni; i++){
        fileout << setw(10) << setprecision(7) << dati[i] << endl;
    }

    //chiudo fileout
    fileout.close();

    //stampo richieste
    cout << "n dati scartati: " << nscart << endl;
    cout << "n dati accettati: " << nbuoni << endl;
    for (int i=0; i<nbuoni; i++){
        cout << setw(10) << setprecision(7) << dati[i] << endl;
    }
    

    return 0;

}


bool isInRange(float mini, float maxi, float valo){

   if (valo>=mini && valo<=maxi) return true;

   else return false;

}