#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio en C que inicialice un array de 150 elementos enteros al azar entre 0 y 100. 
Debes crear una función que reciba como parámetro un valor entero, otro parámetro con el array inicializado y 
otro con la longitud del array. 
La función se llamará "encuentraValor (int array[], int longitud, int valorBuscado)" y debe devolver 
un valor entero. El valor entero devuelto será -1 si el "valorBuscado" no existe dentro del array, 
y será el índice del primer elemento del array cuyo valor sea igual al "valorBuscado".*/

int encuentraValor(int array[], int longitud, int valorBuscado);

int main (int argc, char *argv[]) {

	int numeros[150], i;
    
    srand(time(NULL));

    for(i = 0; i < 150; i++){
        numeros[i] = obtenerNumeroAleatorio(0,100);
    }

    printf("%d", encuentraValor(numeros, 150, 37));

    printf("\n");
    system("pause");
    return 0;
    
}


int encuentraValor(int array[], int longitud, int valorBuscado){
    int i;
    
    for(i = 0; i < longitud; i++){
        if(array[i] == valorBuscado){
            return i;
        }
    }

    return -1;

}
