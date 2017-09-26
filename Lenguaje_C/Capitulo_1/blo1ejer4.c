#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa en C que pida al usuario un número entero, y calcule e imprima en pantalla si 
el número es positivo o negativo.*/

int main (int argc, char *argv[]) {
	int a;
	printf("Primer numero: ");
    scanf("%d", &a);
    
    
    if(a>0){
    	printf("Es positivo");
	}
	else{
		if(a<0){
			printf("Es negativo");
		}
		else{
			printf("El numero es cero");
		}
	}
    
	return 0;
}
