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
    int flag=0;
    int flagPar=0;


    while(respuesta=='s')
    {
        printf("\nIngrese el numero:");
        scanf("%d", &numero);
        while(numero==0)
        {
            printf("\nError ingrese el numero: ");
            scanf("%d", &numero);
        }
        if(numero%2==0)
        {
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


            printf("desea continuar? ");
            respuesta=getche();


    }


    printf("\nLa cantidad de pares es: %d" , contadoresPares);
    printf("\nLa cantidad de impares es: %d" , contadoresImpares);
    printf("\nLa cantidad de positivos es: %d" , contadoresPositivos);
    printf("\nLa cantidad de negativos es: %d" , contadoresNegativos);
   return 0;
}

