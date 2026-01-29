#include <iostream>
#include <fstream>


using namespace std;


int main(){

    int voti[30];
    int conta=0;
    int appo;
    ifstream filein;

    filein.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab04_20251021/voti_zoppi.dat");
    if(filein.fail()){
        cout << endl << "Problema apertura file. Esco!" << endl;
        return -1;
    }

    while(!filein.eof()){
        filein>>appo;
        if (appo>=18 && appo<=30){
            
            voti[conta]=appo;
            conta ++;
        }
    }

    filein.close();

    for(int i=0; i<conta; i++){
        cout << voti[i] << endl;
    }

    return 0;
}


