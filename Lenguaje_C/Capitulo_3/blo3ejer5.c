#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio parecido a los dos anteriores, dónde se imprima el mayor valor y 
el menor de todos los introducidos.*/

int main (int argc, char *argv[]) {

	int menor, mayor, num;
    
    printf("Introduce un numero: ");
    scanf("%d", &num);

    menor = num;
    mayor = num;
    
	for( ; num != 0; ){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if(num != 0){
            if(num < menor){
                menor = num;
            }
            else{
                if(num > mayor){
                    mayor = num;
                }
            }
        }
    }
    
    printf("El menor es: %d", menor);
    printf("El mayor es: %d", mayor);

    printf("\n");
    system("pause");
    return 0;
    
}
