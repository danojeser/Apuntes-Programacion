#include <stdio.h>
#include <stdlib.h>

void arrayNumerosAleatorios(int array[], int longitud, int inferior, int superior);

int main (int argc, char *argv[]) {

    int i;
    int numeros [100];

    arrayNumerosAleatorios(numeros, 100, 10, 100);
    
    for(i = 0; i < 100; i++){
        printf("%d ",numeros[i]);
    }

    printf("\n");
    system("pause");
    return 0;
    
}


void arrayNumerosAleatorios(int array[], int longitud, int inferior, int superior){    
    int i;
    srand(time(NULL));

    for (i = 0; i < longitud; i++){
        array[i] = rand() % (superior - inferior + 1) + inferior;
    }
}
