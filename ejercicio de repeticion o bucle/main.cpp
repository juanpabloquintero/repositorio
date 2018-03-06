#include <iostream> // biblioteca de entrada y salida
#include <math.h>  // biblioteca matematica

using namespace std;

int main()
{
    // declaracion de variable
   int suma=0 , contador=0 ;
        while(contador<10){
            suma=suma+contador;
            cout<< "suma actual :" << suma <<endl;
            contador = contador+1;
            cout << "contador actual:" << contador << endl;

        }
        suma=pow(suma,3);
        cout << "suma total " << suma;





    return 0;
}
