#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa en C que pida un número al usuario. Si el número está entre 2 y 4 (ambos inclusive) debe imprimir
en pantalla la palabra "pequeño", si el número está entre 5 y 7 (ambos inclusive) se debe imprimir la palabra "mediano",
y si el número está entre 8 y 12 se debe imprimir la palabra "grande". Si el número no es ninguno de estos se debe 
imprimir la frase "número no válido". Debes utilizar una sentencia switch para poder resolver este ejercicio.*/

int main (int argc, char *argv[]) {

    int a;
    
	printf("Introduce un numero: ");
    scanf("%d", &a);

    switch (a){
        case 2:
        case 3:
        case 4:
            printf("Pequenio");
            break;
        case 5:
        case 6:
        case 7:
            printf("Mediano");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("Grande");
            break;
        default:
            printf("Numero no valido");
    }



    return 0;
    
}
