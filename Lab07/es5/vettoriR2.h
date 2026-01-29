/*Libreria per la manipolazione di vettori in R2*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define DIM 2

/*Restituisce la somma di v1 e v2 in res*/
void somma(double v1[], double v2[], double res[]);
/*...sottr... */

/*Restituisce il prodotto scalare (o interno) tra due vettori v1 e v2*/
double prodScalare(double v1[],double v2[]);

/*Restituisce il modulo (norma) di un vettore v*/
double modulo(double v[]);

/*....altre funzioni/procedure...*/
void sottrazione(double v1[], double v2[], double res[]);


double angolo(double v[]);


void componenti(double r, double a, double res[]);


bool ortogonali(double v1[], double v2[]);


void lettura(double a, double b);


void stampa(double v[]);