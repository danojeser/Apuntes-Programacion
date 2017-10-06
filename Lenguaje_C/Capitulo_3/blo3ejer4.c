#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio igual al anterior, con la particularidad de que debe imprimir en pantalla el menor, 
no el mayor.*/

int main (int argc, char *argv[]) {

	int menor, num;
    
    printf("Introduce un numero: ");
    scanf("%d", &num);

    menor = num;
    
	for( ; num != 0; ){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if(num != 0){
            if(num < menor){
                menor = num;
            }
        }
    }
    
    printf("El menor es: %d", menor);

    printf("\n");
    system("pause");
    return 0;
    
}
