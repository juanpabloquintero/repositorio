#include <stdio.h>
#include <stdlib.h> //biblioteca de entrada y salida

int main(void)

// ingreeso de variable
{
            float importe, importem;

            printf("Introduzca Importe:");
    scanf("%f",&importe);

    // proceso de las varibles

            if (importe>15000)
            {
       importe=importe*0.16;
    }
    else
    {
        importem=importe*0.1;
    }

    printf("El importe neto es %f pesos\n",importe-importem);

    system("PAUSE");
    return 0;
}
