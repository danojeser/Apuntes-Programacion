#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

	int array[20][20];
    int i, j, suma = 0, media, min = 100, max = 0;
    srand(time(NULL));

    //Crear array
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            array[i][j] = rand() % 101;
        }
    }

    //Imprimir array
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            printf("%d\t", array[i][j]);
        }
    }

    //Quitar pares
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            if(array[i][j] % 2 == 0){
                array[i][j] = 0;
            }
        }
    }

    printf("\n\n");
    //Imprimir array
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            printf("%d\t", array[i][j]);
        }
    }


    printf("\n");
    system("pause");
    return 0;
    
}
