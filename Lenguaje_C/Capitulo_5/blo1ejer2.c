#include <stdio.h>
#include <stdlib.h>

/*Realiza una función en C que pida al usuario dos números. Los dos números deben estar comprendidos 
entre un máximo y un mínimo. La función main debe pedir al usuario dos valores: uno mínimo y otro máximo. 
La función main debe enviar esos dos valores del usuario a otra función que, a su vez, pida dos valores al 
usuario teniendo en cuenta el mínimo y máximo introducidos previamente. 
La función no debe devolver ningún valor.*/

void numeroComprendido(int minimo, int maximo);

int main (int argc, char *argv[]) {

	int minimo, maximo;
    
    printf("Numero minimo: ");
    scanf("%d", &minimo);

    printf("Numero maximo: ");
    scanf("%d", &maximo);

    numeroComprendido(minimo, maximo);

    printf("\n");
    system("pause");
    return 0;
    
}

void numeroComprendido(int minimo, int maximo){

    int numero = maximo + 1; 

    for( ; numero <= minimo || numero >= maximo ; ){
        printf("Escribe un numero dentro del limite: ");
        scanf("%d", &numero);
    }

}
