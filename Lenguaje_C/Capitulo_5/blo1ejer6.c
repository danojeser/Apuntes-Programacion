#include <stdio.h>
#include <stdlib.h>

/*Desarrollar una función que devuelva un número entero aleatorio, impar y comprendido entre 11 y 23. 
La función main debe llamar a esa función y debe imprimir el valor devuelto.*/

int numeroAleImpar();

int main (int argc, char *argv[]) {

    printf("EIII: %d", numeroAleImpar());    

    printf("\n");
    system("pause");
    return 0;

}

int numeroAleImpar(){
    int num = 2;
    
    srand(time(NULL));

    for(;num % 2 == 0;){
        num = rand() % 13 + 11;
    }

    return num;
}
