#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>


using namespace std;

bool isInRange(float, float, float);

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

        cout << n_mis << endl;

    file_misure.close();
    //
    //
    for (int i=0; i<n_mis; i++){

        if (!isInRange(misure[i], pre_media, pre_stdev)){
            cout << misure[i] << " outlier in posizione " << i+1 << endl;
        }
    }


    return 0;
}



bool isInRange(float val, float m, float ds){
    
    bool check;

    if (val>(m-3*ds) && val<(m+3*ds)) check=true;
    else check=false;
  
    return check;
}