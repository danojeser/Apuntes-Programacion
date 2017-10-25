#include <stdio.h>
#include <stdlib.h>

/* Realiza un ejercicio en C que muestre en pantalla los números del 1 al 100.
El único requisito para esto es que debe hacerse utilizando la recursividad.*/

int main (int argc, char *argv[]) {

    printf("Codigo error: %d", hastaCienRecursivo(1));

    printf("\n");
    system("pause");
    return 0;
    
    
}

int hastaCienRecursivo(int num){
    
    printf("%d\n", num);

    if(num == 100){
        return 0;
    }else{
        return hastaCienRecursivo(num+1);
    }

}