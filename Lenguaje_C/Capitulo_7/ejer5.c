#include <stdio.h>
#include <stdlib.h>
#define LONGITUD 3

/*Devolver array ordenado*/

void arrayNumerosAleatorios(int array[], int longitud, int inferior, int superior);
void ordenarArray(int array[], int arrayOrdenado[], int longitud);

int main (int argc, char *argv[]) {

    int array[LONGITUD];
    int ordenado[LONGITUD];
    int i;

    arrayNumerosAleatorios(array, LONGITUD, 0, 100);
    ordenarArray(array, ordenado, LONGITUD);

    printf("Sin ordenar");
    for(i = 0; i < LONGITUD; i++){
        printf("%d\t", array[i]);
    }
    
    printf("Ordenado");
    for(i = 0; i < LONGITUD; i++){
        printf("%d\t", ordenado[i]);
    }

    printf("\n");
    system("pause");
    return 0;
    
}


void arrayNumerosAleatorios(int array[], int longitud, int inferior, int superior){
    int i;
    srand(time(NULL));

    for (i = 0; i < longitud; i++){
        array[i] = rand() % (superior - inferior + 1) + inferior;
    }
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