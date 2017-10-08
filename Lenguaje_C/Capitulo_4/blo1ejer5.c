#include <stdio.h>
#include <stdlib.h>

/*Modifica el ejercicio anterior para que el usuario pueda apostar, de manera que cada vez que gane 
triplique su dinero. El dinero inicial debe ser 50 €. El usuario debe tener un acumulador de dinero y 
debe decidir cuanto dinero apuesta cada vez.*/

//SIN TERMINAR

int main (int argc, char *argv[]) {

	int cr, tirada, i, dinero = 50, apuesta = 60;
    
    srand(time(NULL));
    
    cr = (rand() % 5) + 1 ;
    
    for(i=0; i < 6; i++){
        
        for(;apuesta>;){

            
        }
        printf("Cuanto dinero quieres apostar? (Tienes %d): ",dinero);
        scanf("%d",&apuesta);


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
