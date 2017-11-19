#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

	int numero, limite, i, j;
    
    printf("Escriba un numero: ");
    scanf("%d", &numero);

    printf("Limite de los multiplos: ");
    scanf("%d", &limite);

    if(limite < numero){
        printf("El limite es menor que el numero introducido. \nSaliendo del programa");
    }

    for(i = numero; i <= limite; i+=numero ){
        printf("\nMultiplo: %d", i);

        for(j = 0; j <= 10; j++ ){
            printf("\n%d X %d = %d", i, j, i*j);
        }
        printf("\n");
        //system("pause");
    }

    printf("\n");
    system("pause");
    return 0;
    
}
