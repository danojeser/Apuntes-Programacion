#include <stdio.h>
#include <stdlib.h>

/*Programa que lea números mientras no se introduzca un cero. De cada número leído mostrará su tabla de multiplicar.*/

int main (int argc, char *argv[]) {

    int num;

    for(int i = 1; i!=0 ;){
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if(num != 0){
            for(int x = 1; x<11; x++){
                printf("%d x %d = %d\n",num,x,num*x);
            }
        }
        else{
            i=0;
        }
    }
	
    printf("\nTALUE");


    return 0;
    
}
