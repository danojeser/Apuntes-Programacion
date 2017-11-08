#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100, 
mediante una función. Debéis crear una función que localiza a todos los números pares del array y les 
cambia el signo, de manera que si eran positivos pasen a ser negativos y viceversa.*/

void cambiarSignoPares(int array[], int longitud);

int main (int argc, char *argv[]) {

	int numeros[150], i;
    
    srand(time(NULL));

    for(i = 0; i < 150; i++){
        numeros[i] = obtenerNumeroAleatorio(0,100);
    }

    //imprimir array
    for(i = 0; i < 150; i++){
        printf("%d\t", numeros[i]);
    }

    cambiarSignoPares(numeros, 150);
    
    printf("Numeros cambiados");
    //imprimir array
    for(i = 0; i < 150; i++){
        printf("%d\t", numeros[i]);
    }


    printf("\n");
    system("pause");
    return 0;
    
}

void cambiarSignoPares(int array[], int longitud){
    int i; 

    for(i = 0; i < longitud; i++){
        if(array[i] % 2 == 0){
            array[i] *= -1;
        }
    }


}
