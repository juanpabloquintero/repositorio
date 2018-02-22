#include <stdio.h>  //biblioteca de entrada y salida
#include <stdlib.h>

int main(void)
// definicion de variable
{
            int num1,num2,num3;

            printf("Introduzca numero 1:");
    scanf("%d",&num1);

    printf("Introduzca numero 2:");
    scanf("%d",&num2);

    printf("Introduzca numero 3:");
    scanf("%d",&num3);

// operacion de variable
    if (num1+num2==num3)
    {
         printf("El tercer numero es la suma de los dos primeros.\n");
    }
    else
    {
         printf("El tercer numero NO es la suma de los dos primeros.\n");
    }

    system("PAUSE");
    return 0;
}
