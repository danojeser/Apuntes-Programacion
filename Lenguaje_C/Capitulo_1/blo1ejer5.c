#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    int acum, num;
    acum=0;

    for(int i = 0; i < 4; i++){
        printf("Introduce un numero entero: ");
        scanf("%d",&num);
        if(num >= 10){
            acum+=num;
        }
    }
    
    printf("La suma de los numeros es: %d",acum);

    return 0;
    
}
