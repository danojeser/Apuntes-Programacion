#include <stdio.h>
#include <stdlib.h>

void arrayNumerosAleatorios(int array[], int longitud, int inferior, int superior);

int main (int argc, char *argv[]) {

    int longitud = 10;
    int array[longitud];
    

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