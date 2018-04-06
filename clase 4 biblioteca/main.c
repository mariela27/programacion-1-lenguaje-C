#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int edad;
    int legajo;
    edad=pedirEntero("pedir edad: ", 18, 60);
    legajo=pedirEntero("pedir legajo: ", 1, 2000);
    return 0;
}

/*dentro de un archivo hay funciones para utilizar, se utilizan desde distintoa
progrmas.
Dos archivos distintos .h(prototipos de las funciones)
*/
