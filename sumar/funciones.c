#include "funciones.h"
#include <stdio.h>




int pedirEntero(char mensaje[], int minimo, int maximo)

{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    while(numero<minimo||numero>maximo)
    {
        printf("Error!! %s ", mensaje);
        scanf("%d", &numero);
    }
   return numero;
}
