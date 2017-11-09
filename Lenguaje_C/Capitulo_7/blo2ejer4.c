#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100, 
mediante una función. A continuación debes crear otra función que imprima en pantalla los elementos 
del array cuyo valor sea un número primo.*/

void imprimirPrimosArray(int array[], int longitud);

int main (int argc, char *argv[]) {

    int numeros[150];
    srand(time(NULL));
    
    inicializaAzarArrayMinimoMaximo(numeros, 150, 0, 100);

    imprimirPrimosArray(numeros, 150);

    printf("\n");
    system("pause");
    return 0;
    
}

void imprimirPrimosArray(int array[], int longitud){
    int i, j, primo = 1;
    //Si la variable "primo" es 0, significa que el numero que se esta comprobando no es primo

    for(i = 0; i < longitud; i++){
        for(j = 2; j < array[i]/2; j++){
            if(array[i] % j == 0){
                primo = 0;
                j = array[i];
            }
        }
            printf("%d\t", array[i]);
    }
    primo = 1;
}