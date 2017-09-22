#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    int a;
    
	printf("Introduce un numero: ");
    scanf("%d", &a);

    switch (a){
        case 2:
        case 3:
        case 4:
            printf("Pequenio");
            break;
        case 5:
        case 6:
        case 7:
            printf("Mediano");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            printf("Grande");
            break;
        default:
            printf("Numero no valido");
    }



    return 0;
    
}
