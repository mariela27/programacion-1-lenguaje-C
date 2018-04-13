#include <stdio.h>
#include <stdlib.h>
int contarPares(int[], int);
/** \brief
 *
 * \param char[] coleccion de caracteres
 * \param int tamaño de la coleccion
 * \return
 *
 */

int buscarChar(char[], int, char);

int main()
{
    int vector[5]={5,2,8,6,5};
    char letras[5]={'f','g','i','m','q'};
    char indexLetra;
    int cantidad;

    cantidad=contarPares(vector,5);
    indexLetra=buscarChar(letras, 5, 'a');
    if(indexLetra==-1)
    {
        printf("no se encontro el caracter!!!");
    }
    else
    {
        printf("el caracter se encuentra en el array.\n");
    }
    printf("cantidad de pares: %d", cantidad);
    return 0;
}
int contarPares(int array[], int cantidad)//parametros formales los del prototipo de la funcion
{
    int contPares=0;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]%2==0)
        {
            contPares++;
        }
    }
    return contPares;
}
int buscarChar(char array[], int cantidad, char caracter)
{
    int index=-1;
    int i;
    for(i=0; i<cantidad; i++)
    {
        if(array[i]==caracter)
        {
            index=i;
            break;
        }
    }
    return index;
}
