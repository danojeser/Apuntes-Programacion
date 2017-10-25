#include <stdio.h>
#include <stdlib.h>

/* La serie de Fibonacci es una serie numérica que comienza en los números 1, 1 y continua de forma infinita, 
calculando cada mienbro de la serie como la suma de los dos anteriores. De esta manera, la serie de Fibonacci 
comienza 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.......... Debes realizar un programa en C que cree una función 
llamada "fibonacci". La función recibirá dos argumentos de entrada, de tipo entero. Los dos argumentos deben 
ser miembros de la serie de Fibonacci. La función debe imprimir en pantalla los siguientes 5 términos de la 
serie de Fibonacci.*/

void fibonacci(int viejo, int anterior);

int main (int argc, char *argv[]) {

	int a, b;
	printf("Primer numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    fibonacci(a, b);

    printf("\n");
    system("pause");
    return 0;
    
}


void fibonacci(int viejo, int anterior){
    int actual = viejo + anterior, i;

    printf("%d\t", viejo);
    printf("%d\t", anterior);
    printf("%d\t", actual);

    for(i = 0; i < 5; i++){
        viejo = anterior;
        anterior = actual;
        actual = viejo + anterior;
        printf("%d\t", actual);    
    }
}
