#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 3 elementos enteros al azar entre 0 y 100, 
mediante una función. Después de esto debes crear una función que ordene los tres elementos del array
en otro array diferente y lo devuelva.*/


///////CORREGIR
void ordenarArray(int array[], int arrayOrdenado[], int longitud);

int main (int argc, char *argv[]) {

    int array[3], arrayOrdenado[3], i;
    srand(time(NULL));

    for(i = 0; i < 3; i++){
        array[i] = rand() % 101;
        arrayOrdenado[i] = 0;
    }

    printf("Sin ordenar");
    for(i = 0; i < 3; i++){
        printf("%d\t", array[i]);
    }

    ordenarArray(array, arrayOrdenado, 3);

    printf("Ordenado");
    for(i = 0; i < 3; i++){
        printf("%d\t", arrayOrdenado[i]);
    }


    printf("\n");
    system("pause");
    return 0;
    
}

void ordenarArray(int array[], int arrayOrdenado[], int longitud){
    int aux, ordenado = 0, i, j;
    
    for(i = 0; i < longitud; i++){
        arrayOrdenado[i]=array[i];
    }

    for(i = 0; i < longitud && ordenado == 0; i++){
        ordenado = 1;
        for(j = 0; j < longitud - i; j++){
            if(arrayOrdenado[j] > arrayOrdenado[j+1]){
                ordenado = 0;
                aux = arrayOrdenado[j];
                arrayOrdenado[j] = arrayOrdenado[j+1];
                arrayOrdenado[j+1] = aux;
            }
        }
    }

}
