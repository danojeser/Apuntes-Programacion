#include <stdio.h>
#include <stdlib.h>

/*Realiza una función en C que reciba tres valores enteros como argumentos de entrada. La función debe 
imprimir dichos valores en orden. Debes crear una función para mostrar los números en orden ascendente 
y otra para mostrarlos en orden descendente.*/

void ordenarNumeros(int num1, int num2, int num3);

int main (int argc, char *argv[]) {

    int a, b, c;
    
    srand(time(NULL));

    a = rand() % 100;
    b = rand() % 100;
    c = rand() % 100;

    ordenarNumeros(a,b,c);

    printf("\n");
    system("pause");
    return 0;
    
}


void ordenarNumeros(int num1, int num2, int num3){

/*  
    if(num1 > num2 && num1 > num3){
        printf("%d\t", num1);
        if(num2 > num3){
            printf("%d\t",num2);
            printf("%d", num3);
        }
        else{
            printf("%d\t",num3);
            printf("%d", num2);
        }
    }
    else{
        if(num2 > num3 && num2 > num1){

        }
    }
*/

}
