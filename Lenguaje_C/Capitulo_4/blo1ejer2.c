#include <stdio.h>
#include <stdlib.h>

/* Modifica el ejercicio anterior para que el programa genere miles de números al azar en el 
intervalo indicado por el usuario. Al finalizar la generación de esos miles de números se debe 
indicar el número menor y el mayor de todos los generados.*/

int main (int argc, char *argv[]) {

	int inferior, superior, aleatorio, i;
    
    srand(time(NULL));
    printf("Limite inferior: ");
    scanf("%d",&inferior);
        
    printf("Limite superior: ");
    scanf("%d",&superior);

    for(i=0; i<3000; i++){
        aleatorio = rand() % (superior - inferior +1) + inferior;
        printf ("\nNumero aleatorio: %d", aleatorio);
    }

    printf ("\n");
    system ("pause");
    return 0; 
    
}
