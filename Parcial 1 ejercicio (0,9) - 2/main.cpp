#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int num1=0,num2=0,num3=0;

            printf("Introduzca numero 1:");
    scanf("%d",&num1);

    printf("Introduzca numero 2:");
    scanf("%d",&num2);

    printf("Introduzca numero 3:");
    scanf("%d",&num3);

    if (num1*num2==num3)
    {
         printf("El tercer numero es la multiplicacion de los dos primeros.\n");
    }
    else
    {
         printf("El tercer numero NO es la multiplicacion de los dos primeros.\n");
    }

    system("PAUSE");
    return 0;
}

