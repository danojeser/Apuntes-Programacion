#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100. 
Después de su inicialización debéis imprimir el array en orden inverso.*/

int main (int argc, char *argv[]) {

    int numeros[150], i;
    
    srand(time(NULL));

    for(i = 0; i < 150; i++){
        numeros[i] = obtenerNumeroAleatorio(0,100);
    }

    for(i = 149; i >= 0; i--){
        printf("%d\t", numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}
