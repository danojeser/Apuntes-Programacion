#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que pida números al usuario. El programa debe detenerse cuando el usuario introduzca 
el número 0 (cero), que no debe tenerse en cuenta para ninguna operación aritmética, simplemente para salir 
de la aplicación. Cuando el programa haya terminado, se debe sacar en pantalla el valor de la suma de todos 
los números.*/

int main (int argc, char *argv[]) {

    int acum = 0, num = 5;
    
	for( ; num != 0; ){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        acum+=num;
    }

    printf("La suma de los numeros es: %d",acum);

    printf("\n");
    system("pause");
    return 0;
    
}
