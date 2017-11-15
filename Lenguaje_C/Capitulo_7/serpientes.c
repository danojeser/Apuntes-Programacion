#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>
#define LONGITUD 100
#define JUGADORRES 5

int lanzarDado();

int main (int argc, char *argv[]) {

	int tablero[LONGITUD], turno = 0, posiciones[JUGADORRES], dado;

    srand(time(NULL));

	printf("Primer numero: ");
    scanf("%d", &a);

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
********************************/
void iniciarTablero(int tablero[]){
    int i;
    for(i = 0; i < LONGITUD; i++){
        tablero[i] = 0;
    }

    tablero[0] = 37;
}
