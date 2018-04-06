#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
void sumar1(void);
void sumar2(int, int);
int sumar3();
int sumar4(int, int);


int main()
{
    sumar1();
    return 0;
}
void sumar1(void)
{
    int suma;
    int numero1;
    int numero2;
    numero1=pedirEntero("ingrese un numero: ",1,1000);
    numero2=pedirEntero("ingrese un numero: ",1,1000);
    suma=numero1+numero2;
    printf("el resultado es %d", suma);
}
void
