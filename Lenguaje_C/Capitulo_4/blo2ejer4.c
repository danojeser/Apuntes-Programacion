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

    int i, j, pos, cont = 0;
    srand(time(NULL));
    pos = rand() % 144 + 1;

    for(i = 0; i< 10; i++){
        for(j = 0; j < 20; j++){
            //Dibuja la primera y ultima linea
            if(i == 0 || i == 9){
                printf("*");
            }
            else{
                if(j==0 || j==19){ //Dibuja las aristas laterales del rectangulo
                    printf("*");
                }
                else{ //Dibuja el espacio vacio del rectangulo
                    cont++;
                    if(cont == pos){
                        printf("0");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;
    
}
