#include <iostream> //bilbioteca I/o
#include <math.h>> // biblioteca matematica


using namespace std;

int main()
// asisgnacion de variable
{ float R1=0.0, R2=0.0, Rp=0, R3=0.0;
int Nr=0;

// proceso
    cout<< "Este Programa es para calcular N resistencias en paralelo : ";

        cout<<"Ingrese la cantidad de resistencias a calcular:";
        cin>>Nr;


        cout<<"Ingrese R1: ";
        cin>> R1;
        cout<< "Ingrese R2:";
        cin>>R2;
        Rp= (R1*R2)/(R1+R2);
        cout <<Rp << endl ;
        for (int i=3; i<=Nr; i++)
        {
            cout << "ingrese R" << i << ": " ;
            cin>> R3;
            Rp = (Rp*R3)/ (Rp+R3);
            cout<< Rp << endl ;
        }
        cout << endl << "Resistencia total:" << Rp;





    return 0;
}
