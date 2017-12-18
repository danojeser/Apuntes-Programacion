#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

	int array[10][10];
    int i, j;
    srand(time(NULL));

    //Crear array
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i == j){
                array[i][j] = 1;
            }else{
                //El 9 deberia ser 10, por la longitud del array
                if(i+j == 9){
                    array[i][j] = 1;
                }
                else{
                    array[i][j] = 0;
                }
            }
        }
    }

    //Imprimir array
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    system("pause");
    return 0;
    
}
