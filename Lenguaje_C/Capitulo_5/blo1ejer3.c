#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa en C cuya función main pida al usuario dos valores. A continuación se deben 
enviar a otra función, creada por ti, que devuelva el mayor valor de los dos introducidos.*/

int calcularMayor(int num1, int num2);

int main (int argc, char *argv[]) {

    int num1, num2;
    
	printf("Primer numero: ");
    scanf("%d", &num1);
    
	printf("Segundo numero: ");
    scanf("%d", &num2);

    printf("El mayor de los dos numeros es: %d", calcularMayor(num1, num2));

    printf("\n");
    system("pause");
    return 0;
    
}

int calcularMayor(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}