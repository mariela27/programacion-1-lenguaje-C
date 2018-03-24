#include <stdio.h>
#include <stdlib.h>

/* se ingresan numeros (distintos de cero), no se sabe cuantos.
   se pide mostrar:
    * cantidad de pares e impares.
    * porcentaje de numeros positivos y negativos
    * maximo y minimo
    * maximo numero par
    * cantidad de numeros comprendidos entre 125 y 236

*/
/*int main()
{
   int numero;
   char respuesta= 's';


    while(respuesta!='n')
    {
        printf("ingrese de nuevo el numero:");
        scanf("%d", &numero);



    }






    return 0;

}
*/
int main()
{

    int numero;
    int contadoresPositivos=0;
    int contadoresNegativos=0;
    int contadoresNumeros=0;
    int contadoresPares=0;
    int contadoresImpares=0;
    float porcentajePositivo;
    float porcentajeNegativo;
    char respuesta='s';
    int max;
    int min;
    int maxPar;
    int flag=0;
    int flagPar=0;


    while(respuesta!='n')
    {
        contadoresNumeros++;
        printf("\nIngrese el numero:");
        scanf("%d", &numero);
        while(numero==0)
        {
            printf("\nError, ingrese un numero diferente a cero: ");
            scanf("%d", &numero);
        }
        if(numero%2==0)
        {
            if(numero>max||contadoresPares==0)
            {
                maxPar=numero;
            }
            contadoresPares++;

        }
        else
        {
            contadoresImpares++;
        }

        if(numero>0)
        {

            contadoresPositivos++;
        }
        else
        {
            contadoresNegativos++;
        }
        if(flag==0||numero>max)
        {
            max=numero;
        }
        if(flag==0||numero<min)
        {
            min=numero;
            flag=1;
        }
        if(numero<236 && numero>125)
        {
            contadoresNumeros++;
        }

            printf("desea continuar? ");
            respuesta=getche();

    }


    printf("\nLa cantidad de pares es: %d" , contadoresPares);
    printf("\nLa cantidad de impares es: %d" , contadoresImpares);
    printf("\nEl numero minimo fue: %d \n",min);
    printf("\nEl numero maximo fue: %d \n",max);
    printf("\nEl numero maximo par es: %d \n",maxPar);
    porcentajePositivo=(float)contadoresPositivos*100/contadoresNumeros;
    porcentajeNegativo=100-porcentajePositivo;
    printf("\nEl porcentaje de positivos es: %.2f \n",porcentajePositivo);
    printf("\nEl porcentaje de negativos es: %.2f \n",porcentajeNegativo);
    /*printf("\nLa cantidad de positivos es: %d" , contadoresPositivos);
    printf("\nLa cantidad de negativos es: %d" , contadoresNegativos);*/

   return 0;
}

