#include <stdio.h>
#include <stdlib.h>

/*Mayor y menor de una cantidad de números dada por el usuario. El usuario introducirá una cantidad de números, 
tras lo cual se le deben pedir tantos como este haya indicado. Al final se debe imprimir el mayor y el menor de todos los introducidos. */

int main (int argc, char *argv[]) {

    int mayor, menor, cantidad, num, i;
    
    printf("Cuantos numeros?: ");
    scanf("%d", &cantidad);

	printf("Escribe un numero: ");
    scanf("%d", &num);

    mayor=num;
    menor=num;
    
    for(i=1; i<cantidad; i++){
        printf("Escribe un numero: ");
        scanf("%d", &num);
        if(num > mayor){
            mayor = num;
        }
        else{
            if(num < menor){
                menor = num;
            }
        }
    }

    printf("El mayor es: %d",mayor);
    printf("El menor es: %d",menor);

    printf("\n");
    system("pause");
    return 0;
    
}
