#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int  (%d) (numero entero)
    float (%f) (numeros con coma)
    char (%c) (caracter "a" "5")


    */
    int numero1=9 ;
    float numero2;
    char letra;
    float suma;
    printf("ingrese un numero entero: ");
    scanf("%d", &numero1);
    printf("ingrese un numero con coma:");
    scanf("%f", &numero2);
    printf("ingrese la letra: ");
    /*fflush(stdin);
    scanf("%c", &letra);*/

    //getche()/getch()

    letra= getch();

    suma=numero1+numero2;

    printf("el numero es: %d y el numero flotante es:%.0f" , numero1, numero2);
    printf("\nla suma es: %.2f", suma );
    printf("\nla letra es: %c", letra );
    return 0;
}
