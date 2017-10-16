#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

    int opcion=1;

    for (;opcion != 0;){
        system("cls");
        printf("\t\tNOMBRE DEL MENU");
        printf("\n1.-Opcion Uno");
        printf("\n2.-Opcion Dos");
        printf("\n3.-Opcion Tres");
        printf("\n0.-Salir");

        printf("\n\nQue opcion quiere?: ");
        scanf("%d",&opcion);

        switch (opcion) {
            case 1: 
                printf("Esta es la opcion 1");
                break;
            case 2: 
                printf("Esta es la opcion 2");
                break;
            case 3: 
                printf("Esta es la opcion 3");
                break;
            case 0:
                printf("Usted se va");
                break;
            default:
                printf("Opcion erronea, escriba una opcion correcta");
        }
    }

    printf("\n");
    system("pause");
    return 0;
    
}
