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
            suma += array[i][j];
            
            if(min > array[i][j]){
                min = array[i][j];
            }

            if(max < array[i][j]){
                max = array[i][j];
            }
        }
    }

    //Imprimir array
    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            printf("%d\t", array[i][j]);
        }
    }

    printf("Suma total: %d\n", suma);
    printf("Media: %f\n", (float) suma/(20*20));
    printf("Maximo: %d\n", max);
    printf("Minimo: %d", min);


    printf("\n");
    system("pause");
    return 0;
    
}
