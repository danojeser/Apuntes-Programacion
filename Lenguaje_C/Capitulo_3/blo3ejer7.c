#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que pida números al usuario, hasta que uno de ellos sea 0 (cero). Al finalizar se debe 
imprimir en pantalla cuantos son positivos y cuantos negativos. No debes tener en cuenta el 0 (cero). */

int main (int argc, char *argv[]) {

	int neg=0, pos=0, num = 1;
    
	for( ; num != 0; ){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if(num != 0){
            if(num < 0){
                neg++;
            }
            else{
                if(num > 0){
                    pos++;
                }
            }
        }
    }
    
    printf("El cont neg es: %d", neg);
    printf("\nEl cont pos es: %d", pos);

    printf("\n");
    system("pause");
    return 0;
    
}
