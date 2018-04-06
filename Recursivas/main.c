#include <stdio.h>
#include <stdlib.h>
//puede ser llamada desde otra funcion, puede causar un bucle


/*
int main()
{
    int numero=5;
    int i;
    int factoreo=1;

    for(i=numero; i>=1; i--)
    {
        factoreo=factoreo*i;
    }
    printf("el factorial es: %d:", factoreo);
    return 0;
}
*/
/** \brief calcula el factorial de un numero
 *
 * \param un numero
 * \param el factorial de el numero ingresado como parametro
 * \return
 *
 */

int factorial(int);
int main()
{
    int numero=5;
    int factor;
    factor=factorial(numero);
    printf("el factorial es: %d", factor);
    return 0;
}
int factorial(int numero)
{
    int respuesta;
    if (numero==0)
    {
      respuesta=1;
    }
    else
    {
        respuesta= numero *factorial(numero-1);
    }
    return respuesta;


}
//main llama a la funcion factorial y la funcin factorial llama a la funcion factorial
