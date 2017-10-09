#include <stdio.h>
#include <stdlib.h>

/*Modifica el ejercicio anterior para que el usuario pueda apostar, de manera que cada vez que gane 
triplique su dinero. El dinero inicial debe ser 50 €. El usuario debe tener un acumulador de dinero y 
debe decidir cuanto dinero apuesta cada vez.*/

int main (int argc, char *argv[]) {

	int cr, tirada, i, dinero = 50, apuesta = 60;
    
    srand(time(NULL));
    
    cr = (rand() % 5) + 1 ;
    
    for(i=0; i < 6; i++){
        
        printf("Cuanto dinero quieres apostar? (Tienes %d): ",dinero);
        scanf("%d",&apuesta);

        if(apuesta > dinero){
            printf("Ha apostado mas dinero del que tiene.");
            //Retrocedemos en uno el bucle, para que el intento erroneo no cuente
            i--;
        }
        else{
            printf ("En que posicion esta la carta roja?(Hay 5 posiciones 1-5) :");
            scanf("%d",&tirada);
            
            if (tirada == cr){
                dinero+=apuesta;
                printf("\n\nHas ganado. Dinero: %d",dinero);
                i=7;         	
            }
            else {
                printf("\n\nHas perdido %d",apuesta);
                dinero -= apuesta;
            }
        }
        
    }
	
	

	printf ("\n");
    system ("pause");
    return 0;
    
}
