#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

int main(){
    //
    //
    ifstream priori;
    float pre_media;
    float pre_stdev;
    //
    ifstream file_misure;
    float misure[50];
    int n_mis=0;
    //
    float validi[50];
    float outliers[50];
    float appo;
    ofstream buttati;
    int conta_buttati=0;
    int conta_validi=0;
    //
    //
    float somma=0;
    //
    //
    priori.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab05_20251028/apparato.dat");

        if(priori.fail()){
          cout << endl << "Errore file input!" << endl;
          return -1;
        }

        priori.ignore(100,'\n');
        priori >> pre_media;
        priori.ignore(100,'\n');
        priori.ignore(100,'\n');
        priori >> pre_stdev;
    priori.close();
    
    cout << pre_media << "       " << pre_stdev << endl;
    //
    //
    file_misure.open("/home/pcfisso/LaboratorioInformatica2025-26/LabInfo_2025_26/Lab05_20251028/dirtyMeasures.dat");

        if(file_misure.fail()){
            cout << endl << "Errore file input!" << endl;
            return -1;
        }
        
        while(!file_misure.eof()){
            file_misure >> misure [n_mis];
            if(!file_misure.eof()){
                n_mis++;
            } 
        }

        cout << endl << n_mis << endl << endl;

    file_misure.close();
    //
    //
    buttati.open("/home/pcfisso/LaboratorioInformatica2025-26/esercizi/Lab05/buttati.dat");

        if(buttati.fail()){
          cout << endl << "Errore file input!" << endl;
          return -1;
        }

    for (int i=0; i<n_mis; i++){

        if (fabs(misure[i]-pre_media) > (float)3*pre_stdev){
            cout << misure[i] << " outlier in posizione " << i+1 << endl << endl;
            buttati << misure[i] << '\n';
            conta_buttati ++;
        }
        else{
            cout << misure[i] << " valido in posizione " << i+1 << endl;
            appo = misure[i];
            somma += appo;
            conta_validi++;
        }

    }

    buttati.close();

    cout << endl << "n dati buttati = " << conta_buttati << endl;
    cout << "n dati buoni = " << conta_validi << endl << endl;
    //
    //

    cout << "media = " << somma/conta_validi << endl;

    

    return 0;
}
