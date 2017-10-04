#include <stdio.h>
#include <stdlib.h>

/* Realizar un ejercicio en C que pida un número al usuario e indique en pantalla si se trata de un número par
o impar. Recuerda que un número par es aquel cuyo resto de su división entre dos sea siempre cero,
y recuerda que un número impar es aquel cuyo resto de su división entre dos sea siempre uno.*/

int main (int argc, char *argv[]) {

    int num;
    
	printf("Dime un numero: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("El numero es par");
    }

    return 0;
    
}
