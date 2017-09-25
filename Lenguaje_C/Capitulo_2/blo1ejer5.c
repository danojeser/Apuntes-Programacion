#include <stdio.h>
#include <stdlib.h>

/*Pedir al usuario cinco números, e imprimir posteriormente el mayor valor introducido 
y el menor valor introducido.*/

int main (int argc, char *argv[]) {

    int num, menor, mayor;
    
    for(int i = 0; i<5; i++){
        printf("Dime un numero: ");
        scanf("%d",&num);

        if(i == 0){
            mayor=num;
            menor=num;
        }

        if(num>mayor){
            mayor=num;
        }
        if(num<menor){
            menor=num;
        }

    }

	printf("Mayor: %d",&mayor);
    printf("Menor: %d",&menor);
    return 0;
    
}
