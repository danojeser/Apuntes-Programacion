#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>
#define LONGITUD 101
#define JUGADORES 5

int lanzarDado();
void iniciarTablero(int tablero[]);

int main (int argc, char *argv[]) {

	int tablero[LONGITUD], turno = 0, posiciones[JUGADORES], dado, juegoTerminado = 0;

    srand(time(NULL));

    printf("\tSERPIENTES Y ESCALERAS");

    do{
        printf("Turno del jugador: %d", turno+1);

        system("pause");



    } while(!juegoTerminado);



    printf("\n");
    system("pause");
    return 0;
    
}

int lanzarDado(){
    return rand() % 6 + 1;
}

/*********************************
 * Funcion que pone el tablero a 0 y posiciona las serpientes y las escaleras dandole el valor a la posicion
 * donde el jugador se va a mover.
 *******************************/
void iniciarTablero(int tablero[]){
    int i;

    for(i = 0; i < LONGITUD; i++){
        tablero[i] = 0;
    }

    //Es el valor a la nueva posicion a la que se van a mover los jugadores
    tablero[1] = 38;
    tablero[4] = 14;
    tablero[9] = 31;
    tablero[17] = 7;
    tablero[21] = 42;
    tablero[28] = 84;
    tablero[51] = 67;
    tablero[54] = 34;
    tablero[64] = 60;
    tablero[72] = 91;
    tablero[80] = 99;
    tablero[87] = 36;
    tablero[93] = 73;
    tablero[95] = 75;
    tablero[98] = 79;

}