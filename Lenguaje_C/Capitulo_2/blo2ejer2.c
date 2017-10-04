#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio igual al anterior, pero con las dos siguientes diferencias:
no existe la categoría de números negativos, por tanto si el usuario introduce un negativo, 
el programa debe terminar; la otra diferencia es que, al acabar, el programa no debe mostrar la suma
de los números, sino cuantos han entrado en cada categoría. A esto se llama contadores, 
a diferencia del ejercicio anterior, que reciben el nombre de acumuladores.*/

//MODIFICADO

int main (int argc, char *argv[]) {
    
    int num, i, acumNeg = 0, acumPos = 0;

    for(i = 0; i < 5;i++){
        printf("Escribe un numero: ");
        scanf("%d",&num);
        if(num > 0){
            acumPos++;
        }
        if(num < 0){
            acumNeg++;
        }
    }

    printf("\n");
    system("pause");
    return 0;
    
}
