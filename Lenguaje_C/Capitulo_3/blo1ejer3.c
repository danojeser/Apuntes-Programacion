#include <stdio.h>
#include <stdlib.h>

/*Vuelve a hacer el Ejercicio_010_sumar_positivos_y_negativos.c, con la particularidad de que se deben pedir 
tantos números como el usuario indique. Este ejercicio es muy parecido al ejercicio 2º de este mismo bloque de 
ejercicios.*/

int main (int argc, char *argv[]) {

	int num,contPos,contNeg,pedir;
    contPos = 0;
    contNeg = 0;
    printf("Cuantos numeros: ");
    scanf("%d", &pedir);

    for(int i = 0; i<pedir; i++){
        printf("Introduce numero: ");
        scanf("%d",&num);
        //El 0 cuenta como positivo
        if(num >= 0){
            contPos++;
        }
        else{
            contNeg++;
        }
    }

    printf("El contador positivo es: %d, el contador negativos: %d",contPos, contNeg);
    
    printf("\n");
    system("pause");
    return 0;
    
    
}
