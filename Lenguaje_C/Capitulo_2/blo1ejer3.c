#include <stdio.h>
#include <stdlib.h>

/*Repetir el ejercicio 1º de este bloque de ejercicios, pero pidiendo al usuario cinco variables. 
Es decir, se pedirán al usuario cinco variables y se mostrará el mayor valor en pantalla.*/

int main (int argc, char *argv[]) {

    int num, mayor;

    for(int i= 0; i<5; i++){
        printf("Dime un numero: ");
        scanf("%d",&num);

        if(i == 0){
            mayor=num;
        }
        
        if(num > mayor){
            mayor = num;
        }
    }

    printf("El mayor es: %d", mayor);
    
    return 0;
    
}
