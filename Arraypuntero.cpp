#include <iostream>
using namespace std;

int numeros[10];
int *dir_numeros;


int main(){
    dir_numeros = &numeros[0];
    for(int i = 0; i <=9;i++){ 
    cout << "Ingrese los números: " << endl;
    cin >> numeros[i];
    }   
    for(int i = 0; i<=9;i++){
    cout << "\tNumero en posisición: " <<i+1<< "\t\tNúmero: " << *dir_numeros++ <<endl;
    }
}
