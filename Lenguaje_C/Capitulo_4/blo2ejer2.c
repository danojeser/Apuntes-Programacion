#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa que dibuje en la pantalla una onda aleatoria de asteriscos. Para ello imprimirá en 
cada línea un número aleatorio de asteriscos entre 1 y 30. El programa termina cuando se impriman 10 líneas.*/

int main (int argc, char *argv[]) {

    int i, j, numAsteriscos;
    srand(time(NULL));

    for(i = 0; i < 10; i++){
        numAsteriscos = rand()% 30 + 1;
        for(j = 0; j<numAsteriscos; j++){
            printf("*");
        }
        printf("\n");
    }


    printf("\n");
    system("pause");
    return 0;
    
}
