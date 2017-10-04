#include <stdio.h>
#include <stdlib.h>

/*Utiliza la operación AND y el operador "if", para tratar de averiguar si un número introducido por el usuario 
es par o impar. Sería recomendable que estudiases el Ejercicio_011_imprimir_binario_de_numero_decimal.c*/

int main (int argc, char *argv[]) {

	int num;
    
	printf("Dime un numero: ");
    scanf("%d", &num);
    
    if(num &  1){
        printf("El numero es impar");
    }

    return 0;
    
}
