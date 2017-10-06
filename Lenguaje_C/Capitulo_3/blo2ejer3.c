#include <stdio.h>
#include <stdlib.h>

/*Ejercicio que obtenga todos los múltiplos de un número introducido por el usuario. Se imprimirán todos 
los múltiplos menores de 100, este será el límite.*/

int main (int argc, char *argv[]) {

	int num,acum;
	printf("De que numero desea conocer los multiplos?: ");
    scanf("%d", &num);

    acum=num;

    for(;acum<100;){
        printf("%d\n",acum);
        acum+=num;
    }

    printf("\n");
    system("pause");
    return 0;
    
}
