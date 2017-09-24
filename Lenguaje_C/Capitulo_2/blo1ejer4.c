#include <stdio.h>
#include <stdlib.h>

/*Repetir el ejercicio 3º de este bloque de ejercicios,
 pero mostrando el menor valor de los cinco introducidos por el usuario.*/

 int main (int argc, char *argv[]) {
    
        int num, menor;
    
        for(int i= 0; i<5; i++){
            printf("Dime un numero: ");
            scanf("%d",&num);

            if(i == 0){
                menor=num;
            }

            if(num < menor){
                menor = num;
            }
        }
    
        printf("El menor es: %d", menor);
        
        return 0;
        
    }
