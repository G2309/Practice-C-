#include <iostream>
using namespace std;

int numStudent, *student, numlab, *lab; 
int notalab1=0, notalab2=0, notalab3=0;


void St(){
    cout << "Ingrese el número de estudiantes que desee ingresar al arreglo: " << endl;
    cin >> numStudent;
    student = new int [numStudent];
    for(int i = 0; i <numStudent; i++){
        cout << "Estudiante No."<<i+1<<endl;
        numlab = 2;
        for(int i=0;i<=numlab;i++){
            cout<<"Ingrese la nota del lab No."<<i+1<<endl;
            cin >> student[i];
            if(i == 0){
                notalab1 = notalab1 + student[i];
            }else if(i == 1){
                notalab2 = notalab2 + student[i];
            }else if(i == 2){
                notalab3 = notalab3 + student[i];
            }
        }
        cout<<"\n"<<endl;
    }
    cout << "\nPromedio Lab01: " << notalab1/numStudent;
    cout << "\nPromedio Lab02: " << notalab2/numStudent;
    cout << "\nPromedio Lab03: " << notalab3/numStudent;

}

int main(){
    St();
    return 0;
}
