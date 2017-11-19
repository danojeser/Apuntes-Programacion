#include <stdio.h>
#include <stdlib.h>
//#include <libreriaArray.c>
//#include <libreria.c>
#define LONGITUD 101
#define JUGADORES 5

int lanzarDado();
void iniciarTablero(int tablero[]);
void iniciarPosiciones(int posicion[]);
int nuevaPosicionJugador(int tablero[], int posicion, int dado);
int juegoFinalizado(int podium[]);
void llenarPodium(int podium[], int jugador);
void imprimirPodium(int podium[]);

int main (int argc, char *argv[]) {

	int tablero[LONGITUD], posicion[JUGADORES], podium[JUGADORES];
    int dado, turno = 0, juegoTerminado = 0;

    srand(time(NULL));

    printf("\tSERPIENTES Y ESCALERAS");
    iniciarPosiciones(podium);
    iniciarPosiciones(posicion);
    iniciarTablero(tablero);

    do{
        //Comprobar si el jugador con el turno ha terminado ya
        if(posicion[turno] < 100){
            printf("\nTurno del jugador %d. Posicion: %d", turno+1, posicion[turno]);

            dado = lanzarDado();
            printf("\nLanzamiento del dado: %d", dado);

            //Nueva posicion del jugador
            posicion[turno] = nuevaPosicionJugador(tablero, posicion[turno], dado);
            if(posicion[turno] == 100){
                printf("\nEl jugador %d ha terminado. Enhorabuena!!", turno+1);
                llenarPodium(podium, turno);
            }
            else{
                printf("\nNueva posicion del jugador %d: %d", turno+1, posicion[turno]);
            }

            printf("\n\n");
            system("pause");
        }

        //Cambiar turno
        turno++;
        turno %= 5;
        juegoTerminado = juegoFinalizado(podium);

    } while(!juegoTerminado);

    //Imprimir podium
    imprimirPodium(podium);

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

    //Es el valor de las casillas que se va a mover si cae en la casilla indice
    tablero[1] = 37;
    tablero[4] = 10;
    tablero[9] = 22;
    tablero[17] = -10;
    tablero[21] = 21;
    tablero[28] = 56;
    tablero[51] = 16;
    tablero[54] = 20;
    tablero[64] = -4;
    tablero[72] = 19;
    tablero[80] = 19;
    tablero[87] = -51;
    tablero[93] = -20;
    tablero[95] = -20;
    tablero[98] = -19;
}


/****************************
 * Funcion que coloca a todos los jugadores en la casilla "0"
 ****************************/
void iniciarPosiciones(int posicion[]){
    int i;
    for(i = 0; i < JUGADORES; i++){
        posicion[i] = 0;
    }
}


int nuevaPosicionJugador(int tablero[], int posicion, int dado){
    int aux = posicion + dado;
    printf("\nTe mueves a la casilla: %d", aux);

    if(tablero[aux] > 0 && aux < 100){  //Compruebo que el indice no se salga del array
        printf("\nSubes por la escalera");
    }
    if(tablero[aux] < 0 && aux < 100){
        printf("\nBajas por la serpiente");
    }

    //Si el jugador se ha pasado de la casilla 100 vuelve hacia atras las casillas que se haya pasado
    if(aux > 100){
        printf("\nTe has pasado de largo");
        aux = 100 - (aux - 100);
    }
    else{
        aux = posicion+dado+tablero[aux];
    }

    return aux;
}


void llenarPodium(int podium[], int jugador){
    int i; 

    for(i = 0; i < JUGADORES; i++){
        if(podium[i] == 0){
            podium[i] = jugador + 1;
            i = JUGADORES + 2;
        }
    }
}


int juegoFinalizado(int podium[]){
    int aux = 0, i;
    for(i = 0; i < JUGADORES; i++){
        if(podium[i] != 0){
            aux++;
        }
    }

    if(aux == 5){
        return 1;
    }
    else{
        return 0;
    }
}


void imprimirPodium(int podium[]){
    int i;
    
    for(i = 0; i < JUGADORES; i++){
        printf("\nPosicion %d Jugador %d", i+1, podium[i]);
    }
}