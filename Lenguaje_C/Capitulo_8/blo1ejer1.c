#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

	int array[20][20];
    int i, j;
    srand(time(NULL));

    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            array[i][j] = rand() % 101;
        }
    }

    for(i = 0; i < 20; i++){
        for(j = 0; j < 20; j++){
            printf("%d\t", array[i][j]);
        }
    }

    printf("\n");
    system("pause");
    return 0;
    
}
