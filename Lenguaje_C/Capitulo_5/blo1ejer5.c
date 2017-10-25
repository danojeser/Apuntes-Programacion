#include <stdio.h>
#include <stdlib.h>

/*Modifica la función del ejercicio anterior para que reciba un tercer parámetro de entrada, siendo 
este el número de términos de la serie de Fibonacci que se deben mostrar en pantalla. Además de mostrar 
los términos en pantalla, la función debe devolver el último número de Fibonacci creado.*/

int fibonacci(int viejo, int anterior, int cantidad);

int main (int argc, char *argv[]) {

    int a, b, ultimoNum, cantidad;

	printf("Primer numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("Cantidad de numeros que deseas: ");
    scanf("%d", &cantidad);

    ultimoNum = fibonacci(a, b, cantidad);
    printf("\nEl ultimo numero es: %d", ultimoNum);

    printf("\n");
    system("pause");
    return 0;
    
}


int fibonacci(int viejo, int anterior, int cantidad){
    int actual = viejo + anterior, i;

    printf("%d\t", viejo);
    printf("%d\t", anterior);
    printf("%d\t", actual);

    for(i = 0; i < cantidad; i++){
        viejo = anterior;
        anterior = actual;
        actual = viejo + anterior;
        printf("%d\t", actual);    
    }

    return actual;
}

