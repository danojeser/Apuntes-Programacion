#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio en C que pida dos variables al usuario, tras lo cual, 
muestre en pantalla el númeor mayor de los dos introducidos.*/

int main (int argc, char *argv[]) {

    int a, b;
    
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("El mayor es: ");
    if(a>b){
        printf("%d",a);
    }
    else{
        if(b>a){
            printf("%d",b);
        }
        else{
            printf("ninguno, los dos son iguales");
        }
    }

    return 0;
    
}
