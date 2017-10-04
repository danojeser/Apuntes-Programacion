#include <stdio.h>
#include <stdlib.h>

/*Media de una cantidad de números introducidos por el usuario. El usuario especificará una cantidad de números, 
tras lo cual se le deben pedir tantos como este haya indicado. Al final se debe imprimir la media. */

int main (int argc, char *argv[]) {

    int media=0, cantidad, i, num;
    
    printf("Cuantos numeros?: ");
    scanf("%d", &cantidad);

    for(i = 0; i < cantidad; i++){
        printf("\n%d-Escribe un numero: ",i);
        scanf("%d",&num);
        media+=num;
    }
    printf("La media es: %f",(float)media/cantidad);
	
    printf("\n");
    system("pause");
    return 0;
    
}
