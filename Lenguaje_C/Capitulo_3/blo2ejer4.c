#include <stdio.h>
#include <stdlib.h>

/*Reforma el ejercicio anterior, para que el límite sea también introducido por el usuario.*/

int main (int argc, char *argv[]) {

    int num, acum, limite;
    
	printf("De que numero desea conocer los multiplos?: ");
    scanf("%d", &num);

    printf("Cual es el limite?: ");
    scanf("%d",&limite);

    acum=num;

    for(;acum<limite;){
        printf("%d\n",acum);
        acum+=num;
    }

    printf("\n");
    system("pause");
    return 0;
    
}
