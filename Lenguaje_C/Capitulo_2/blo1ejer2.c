#include <stdio.h>
#include <stdlib.h>

/*Repetir el ejercicio anterior para mostrar el número menor de los dos introducidos.*/

int main (int argc, char *argv[]) {

	int a, b;
    
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("El menor es: ");
    if(a<b){
        printf("%d",a);
    }
    else{
        if(b<a){
            printf("%d",b);
        }
        else{
            printf("ninguno, los dos son iguales");
        }
    }

    return 0;
    
}
