#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio igual al anterior, con la particularidad de imprimir la media al final del ejercicio, no la suma.*/

int main (int argc, char *argv[]) {

	int acum = 0, num = 5, i;
    
	for(i=0 ; num != 0; i++){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        acum+=num;
    }

    i--;
    printf("La media de los numeros es: %f", (float)acum / i);

    printf("\n");
    system("pause");
    return 0;
    
}
