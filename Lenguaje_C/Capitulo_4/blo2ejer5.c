#include <stdio.h>
#include <stdlib.h>

/*Modifica el programa anterior para que el recuadro se rellene por completo con "0" y "1" de forma aleatoria. 
Ejemplo:
********************
*111101010100101010*
*100001010010001001*
*010101111110000011*
*111111010110101010*
*100001010110001001*
*010101111110000011*
*110101011100101010*
*100001110000001001*
******************** 
*/

int main (int argc, char *argv[]) {

	int i, j;
    srand(time(NULL));

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
                else{ //Dibuja los numeros del interior
                    printf("%d", rand() % 2);
                }
            }
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    return 0;

}
