#include <stdio.h>
#include <stdlib.h>

/* Realiza una función en C que reciba como parámetros de entrada tres valores enteros y uno flotante. 
La función debe devolver la media aritmética de los cuatro valores. La función debe devolver un valor flotante. 
La función main debe usar a esta función creada por ti, e imprimir el valor de la media en la consola de salida.*/

float calcularMedia(int a, int b, int c, int d);

int main (int argc, char *argv[]) {

    int a = 2, b = 3, c = 4, d = 5;
    
    printf("%f", calcularMedia(a,b,c,d));

    printf("\n");
    system("pause");
    return 0;
    
}

float calcularMedia(int a, int b, int c, int d){

    return ((float) a + b + c + d) / 4;

}
