#include <stdio.h>
#include <stdlib.h>

/*Modifica el ejercicio anterior para que el usuario pueda "probar" varias veces a encontrar la carta roja. 
Debes utilizar algún bucle.*/

int main (int argc, char *argv[]) {

	int cr, tirada, i;
    
    srand(time(NULL));
    
    cr = (rand() % 5) + 1 ;
    
    for(i=0; i < 6; i++){
        printf ("En que posicion esta la carta roja?(Hay 5 posiciones 1-5) :");
        scanf("%d",&tirada);
        
        if (tirada == cr){
            printf("\n\nHas ganado");
            i=7;         	
        }
        else {
            printf("\n\nHas perdido");
        }
    }
	
	

	printf ("\n");
    system ("pause");
    return 0;
    
}
