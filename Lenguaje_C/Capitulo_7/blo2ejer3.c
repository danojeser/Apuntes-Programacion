#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100, 
mediante una función. También debes crear dos funciones, una que devuelva el valor mínimo del array 
y otra que devuelva el valor máximo*/

int main (int argc, char *argv[]) {

    int numeros[150];
    
    inicializaAzarArrayMinimoMaximo(numeros, 150, 0, 100);

    printf("El valor mas alto del array es: %d", valorMaximoArray(numeros, 150));
    printf("\nEl valor mas pequenio del array es: %d", valorMinimoArray(numeros, 150));
    
    printf("\n");
    system("pause");
    return 0;
    
}

int valorMaximoArray(int array[], int longitud){
    int maximo = 0, i;

    for(i = 0; i < longitud; i++){
        if(array[i] > maximo){
            maximo = array[i];
        }
    }

    return maximo;
}

int valorMinimoArray(int array[], int longitud){
    int minimo = 100, i;

    for(i = 0; i < longitud; i++){
        if(array[i] < minimo){
            minimo = array[i];
        }
    }

    return minimo;
}