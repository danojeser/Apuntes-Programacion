#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que pida números al usuario hasta que este introduzca el 0 (cero). Al finalizar el 
ejercicio se debe imprimir en pantalla el valor mayor introducido. El valor 0 (cero) no debe tenerse en cuenta.*/

int main (int argc, char *argv[]) {

    int mayor, num;
    
    printf("Introduce un numero: ");
    scanf("%d", &num);

    mayor = num;
    
	for( ; num != 0; ){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if(num != 0){
            if(num > mayor){
                mayor = num;
            }
        }
        
    }
    
    printf("El mayor es: %d", mayor);

    printf("\n");
    system("pause");
    return 0;
    
}
