#include <stdio.h>
#include <stdlib.h>

/*Realiza el típico juego de un trilero de carta roja contra cartas negras. El juego es muy sencillo, 
existen tres cartas sobre la mesa, dos son negras y una roja. El programa debe asignar al azar la 
posición de la carta roja y las dos negras deben ser las otras posiciones. Si por ejemplo la carta roja 
queda al medio, su posición será la 2 y las dos cartas negras tendrán las posiciones 1 y 3. 
El usuario debe encontrar la carta roja, para lo que sólo tendrá una tirada.*/

int main (int argc, char *argv[]) {

	int cr, tirada;
    
    srand(time(NULL));
    
    cr = (rand() % 3) + 1 ;
	
	printf ("En que posicion esta la carta roja? :");
	scanf("%d",&tirada);
	
	if (tirada == cr){
        printf("\n\nHas ganado");           	
    }
    else {
        printf("\n\nHas perdido");
    }
	

	printf ("\n");
    system ("pause");
    return 0;
    
}
