#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>


int main (int argc, char *argv[]) {

	int *puntero, longitud, i;
    printf ("Introduzca la longitud del nuevo array: ");
    scanf ("%d", &longitud);
    puntero = (int *) malloc (sizeof (int) * longitud);

    for(i = 0; i < longitud; i++){
        *(puntero+i) = i;
        printf("la %d", puntero[i]);
    }

    printf("\n");
    system("pause");
    return 0;
    
}