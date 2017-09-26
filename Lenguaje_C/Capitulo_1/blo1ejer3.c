#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa en C que pida al usuario tres números enteros, y calcule e imprima en pantalla la media de los tres.
Recuerda que para calcular la media debes sumar los tres números, y después dividir la suma entre tres*/

int main (int argc, char *argv[]) {
	int a, b, c;
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);
    
    printf("Tercer numero: ");
    scanf("%d", &c);
    
    printf("La media de los tres es: %f",(float) (a+b+c)/3);
    
	return 0;
}
