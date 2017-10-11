#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que dibuje un cuadrado de 20x10 con asteriscos, que contenga un "0" en una 
posición aleatoria en su interior.
********************** 1-20
*                    * 21-40
*                    * 41-60
*                    * 61-80
*                    * 81-100
*                    * 101-120
*         0          * 121-140
*                    * 141-160
*                    * 161-180
********************** 181-200
*/

int main (int argc, char *argv[]) {

    int i, j, pos, cont;
    srand(time(NULL));
    pos = rand() ;

    for(i = 0; i< 20; i++){
        for(j = 0; j < 10; j++){

        }

    }

    printf("\n");
    system("pause");
    return 0;
    
}
