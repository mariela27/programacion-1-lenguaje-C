#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra[15];// se guradan 14 + barra cero// en una cadena se puede
    char palabra2[15];
    char buffer[1024];
    int comp;
    int i;
    int cant;
    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(palabra);
    while(strlen(buffer)>14)
    {
        printf("Reingrese una palabra: ");
        fflush(stdin);
        gets(buffer);
    }
    cant=strlen(palabra);
    strcpy(palabra, buffer);
    strcpy(palabra2, palabra);
    comp=strcmp(palabra2, palabra);//ordenan
    strupr(palabra);
    strlwr(palabra2);
    strcat((buffer, palabra2);//concatenar un par de variables

    printf("Cantidad de caracteres de palabra:%d\n", cant);

    printf("palabra: %s\npalabra2: %s", palabra, palabra2);

    return 0;
}
//declarar 3 variables char nombre, definir cantidad de caracteres char apellido char apellido y nombre y definimo la cantidad
//el uuario ingresa el apellido el nombre, y en la variable apellido y nombre
