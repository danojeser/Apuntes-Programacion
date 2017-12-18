#include <stdio.h>
#include <stdlib.h>

void menu(int acumulador);

int main (int argc, char *argv[]) {

	int opcionesJugador[3];
    int i, acumulador = 0, jugada = -1;
    
    do{
        printf("\t\t\tTRAGAPERRAS\n");
        for(i = 0; i < 3; i++){
            menu(acumulador);

            //Comprobamos que el usuario hace una jugada correcta
            do{
                printf("Escoja una opcion: ");
                scanf("%d", &jugada);
                printf("\n");
                if(jugada > 4 || jugada < 0){
                    printf("Opcion no valida\n");
                }
            }while(jugada > 4 || jugada < 0);
            
            //Si escribe 0, salimos del juego
            if(jugada == 0){
                break;
            }
            
            opcionesJugador[i] = jugada;
        }

        //Condiciones de victoria las 3 elecciones tienes que ser iguales
        if(jugada != 0){
            if( (opcionesJugador[0] == opcionesJugador[1]) && (opcionesJugador[1] == opcionesJugador[2]) ){
                printf("Has ganado!!\n");
                acumulador += 1000;
                //Si ademas de ser iguales son dolar, se le suma un plus al acumulador
                if(opcionesJugador[0] == 4){
                    acumulador += 3000;
                }
            }
            else{
                printf("Has perdido :(\n");
            }
        }
        
        
        system("pause");
        system("cls");
    } while(jugada != 0);


    
    printf("\n");
    
    return 0;
    
}

/**************
 * Funcion que muestra las opciones del jugador
 **************/
void menu(int acumulador){
    printf("1-Mora \t\t\t Acumulador: %d\n", acumulador);
    printf("2-Naranja\n");
    printf("3-Campana\n");
    printf("4-Dolar\n");
    printf("Pulse cero para salir\n");

}