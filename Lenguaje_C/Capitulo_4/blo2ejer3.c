#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que genere números aleatorios entre 1 y 1000 hasta que el valor medio de los 
números generados se aproxime a 500 con un margen de error de 0.5. El programa deberá decir cuantos 
números aleatorios han sido generados cuando finalice.*/

int main (int argc, char *argv[]) {

    int i, acum = 0;
    float media = 0;
    srand(time(NULL));


    for(i = 0 ; media > 500.5 || media < 499.5; i++){
        acum += rand() % 1000 + 1;
        media = (float) acum / i;
    }

    printf("MEDIA: %f",media);
    printf("\nACUM: %d",acum);
    printf("\nCONT: %d",i-1);

    printf("\n");
    system("pause");
    return 0;
    
}
