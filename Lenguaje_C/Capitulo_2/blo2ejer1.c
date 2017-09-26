#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que acumule cinco números introducidos por el usuario, es decir, 
que sume las cantidades introducidas, pero realizando cuatro categorías: números negativos,
números bajos (entre 0 y 25, ambos inclusive), números medios (entre 26 y 250, ambos inclusie)
y números grandes (mayores de 250). Al finalizar el programa, se debe mostrar el total de las 
sumas de los números introducidos en cada una de las categorías. */

int main (int argc, char *argv[]) {

    int num, sumN, sumB, sumM, sumG,;
    
    for(int i = 0; i < 5; i++){
        printf("Introduce numero: ");
        scanf("%d", &num);
        if(num < 0){
            sumN+=num;
        }
        else{
            if(num>=0 && num<=25){
                sumB+=num;
            }
            else{
                if(num>=26 && num<=250){
                    sumM+=num;
                }
                else{
                    sumG+=num;
                }
            }
        }
    }


    printf("Suma negativos: %d",sumN);
    printf("Suma pequenios: %d",sumB);
    printf("Suma medianos: %d",sumM);
    printf("Suma grandes: %d",sumG);
    

    return 0;
    
}
