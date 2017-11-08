#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100, 
dentro de una función. Debes crear una función que reciba el array y su longitud 
"int sumaElementosIndicePar (int array[], int longitud)", que devuelva la suma de los números contenidos
 en el array, cuyo índice sea par.*/

int sumaElementosIndicePar(int array[], int longitud);

int main (int argc, char *argv[]) {
    
    int numeros[150], i;
    
    srand(time(NULL));

    for(i = 0; i < 150; i++){
        numeros[i] = obtenerNumeroAleatorio(0,100);
    }

    printf("%d", sumaElementosIndicePar(numeros, 150));

    printf("\n");
    system("pause");
    return 0;
    
}
    
int sumaElementosIndicePar(int array[], int longitud){
    int suma = 0, i;
    
    for(i = 0; i < longitud; i++){
        if(i % 2 == 0){
            suma += array[i];
        }
    }

    return suma;
}
