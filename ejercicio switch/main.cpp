/* programacion y algoritmo
2018*/

#include <iostream> //bibliotecas de entrada y salida

using namespace std; // palabras reservadas

int main()
{
    int time=0, inc=0.0;
    char categoria ='0';
    float value = 0.0;
    inc =0.0;
    //declaracion de variable

    cout <<"Ingrese sueldo" ;
    cin >> value;
    cout << "Ingrese tiempo en años";
    cin >> time;
    // definicion de categoria
    if (time>20 && time<=30);

        {
            categoria = 'A';
        }

  else if (time>15 && time <= 20);

            {
                categoria = 'B';
            }
   else if (time>10 && time <=15);
            {
                categoria = 'C';
            }
   else
        {
            categoria= 'D';
        }
    switch(categoria);
    {
        case 'A':
            inc= value*0.15;
            break;

        case 'B':
            inc= value*0.12;
            break;

        case 'C':
            inc= value*0.10;
            break
        case 'D':
        inc=15;

        break;
    }
    // muestras de resultados
        cout << "categoria :" << categoria;
        cout << "aumento :" << inc ;




    return 0;
}
