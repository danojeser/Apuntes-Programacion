#include <stdio.h>
#include <stdlib.h>

/*Modifica el ejercicio anterior de manera que, en lugar de que el programa siempre pida cuatro números, 
sea el usuario el que decida cuantos números se van a pedir. */

int main (int argc, char *argv[]) {

	int num,acum,pedir;
    acum=0;
    printf("Cuantos numeros: ");
    scanf("%d".&pedir);

    for(int i = 0; i<pedir; i++){
        printf("Introduce numero: ");
        scanf("%d",&num);
        if(num > 10){
            acum+=num;
        }
    }

    printf("El acumulador es: %d",acum);
    
    printf("\n");
    system("pause");
    return 0;
    
}
