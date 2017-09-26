#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa en C que pida al usuario dos números enteros, y calcule e imprima en pantalla la suma de los dos.*/

int main (int argc, char *argv[]) {
	int a, b;
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);
    
    
    printf("La suma es: %d",a+b);
    
	return 0;
}
