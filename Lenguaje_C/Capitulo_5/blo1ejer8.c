#include <stdio.h>
#include <stdlib.h>

/*Realiza una función en C que reciba un valor entero, del 1 al 10, como argumento de entrada e 
imprima en pantalla dicho número con palabras.*/

void nombreNumero(int numero);

int main (int argc, char *argv[]) {

    int numero;
    srand(time(NULL));
    numero = rand() % 10 + 1;

    printf("El numero es: %d\n", numero);
    nombreNumero(numero);

    printf("\n");
    system("pause");
    return 0;
    
}

void nombreNumero(int numero){
    switch(numero){
        case 1:
            printf("Uno");
            break;
        case 2:
            printf("Dos");
            break;
        case 3:
            printf("Tres");
            break; 
        case 4:
            printf("Cuatro");
            break;
        case 5:
            printf("Cinco");
            break;
        case 6:
            printf("Seis");
            break;
        case 7:
            printf("Siete");
            break;
        case 8:
            printf("Ocho");
            break;
        case 9:
            printf("Nueve");
            break;
        case 10:
            printf("Diez");
            break;
        default: 
            printf("Numero no valido");
    }

}
