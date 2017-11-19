#include <stdio.h>
#include <stdlib.h>
#include <libreria.c>
#include <libreriaArray.c>
#include <time.h>
#define JUGADORES 5
#define META 47

void inicializaArrayJugadores (int array[], int longitud);
void inicializaArrayTablero (int array[], int longitud);
int menu();
int calculaNuevaPosicion (int jugadores, int tablero[], int turno);
int aumentarTurno (int turnoActual);
void rellenaCasillaEspecial (int indice, int mov, int tableroMovimientos[]);
//void todasCasillasEspeciales (int tableroMovimientos[]);
void imprimirPodium(int jugadoresEnMeta[]);
int juegoFinalizado (int jugadoresEnMeta[]);
int esCasillaEspecial (int posicion);
void imprimirMensajeCasillaEspecial (int posicion);
void inicializaArrayJugadoresEnMeta (int array[], int longitud);
 
int main (int argc, char *argv[]) {
     srand (time(NULL));
    int jugadores[JUGADORES], tablero[META], jugadoresEnMeta[JUGADORES], contadorPodium, turno, eleccionUsuario;
       
         
        turno = obtenerNumeroAleatorio(0, JUGADORES-1);
        printf ("\n\nComienza el jugador: %d", turno+1);
        inicializaArrayJugadores(jugadores, JUGADORES);
        inicializaArrayJugadoresEnMeta(jugadoresEnMeta, JUGADORES);
        inicializaArrayTablero (tablero, META);
        eleccionUsuario= menu();
 
    do{
            if (jugadoresEnMeta[turno] == 0) {
            // Mensaje de la posición actual del jugador
            printf ("\n\nJugador %d: Posicion actual: %d", turno+1, jugadores[turno]);
            // Cálculo de la nueva posición
            jugadores[turno] = calculaNuevaPosicion (jugadores[turno], tablero, turno);
            // En el caso de que se caiga en una casilla especial
            // se imprime un mensaje especial
            //imprimirMensajeCasillaEspecial (jugadores[turno]);
            // Imprimimos la nueva posición
            printf ("\n\tNueva posicion %d", jugadores[turno]);
 
            // Comprobamos si el jugador ha llegado a meta
            if (jugadores[turno] == META){
                // Se le asigna un turno de llegada, esto sirve como
                // bandera, para saber que el jugador ha llegado a
                // la meta
                jugadoresEnMeta[turno] = contadorPodium;
                printf ("\n\tEL JUGADOR HA ACABADO EL JUEGO EN POSICION: %d", contadorPodium);
                contadorPodium++;    
            }
            pausa();
        }
        // calculo del nuevo turno  
        turno = aumentarTurno (turno);
       
       
    }while(!juegoFinalizado(jugadoresEnMeta));
   
    imprimirPodium(jugadoresEnMeta);
   
   
   
    return 0;    
}
 
 
 
 
void inicializaArrayJugadores (int array[], int longitud) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        array[i] = 0;
    }    
    // Devolución
 
}
 
void inicializaArrayJugadoresEnMeta (int array[], int longitud) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        array[i] = 0;
    }    
    // Devolución
 
}
 
void inicializaArrayTablero (int tableroMovimientos[], int longitud) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        tableroMovimientos[i] = 0;
    }    
   
    rellenaCasillaEspecial (5, 3, tableroMovimientos);
    rellenaCasillaEspecial (6, -2, tableroMovimientos);
    rellenaCasillaEspecial (9, 3, tableroMovimientos);
    rellenaCasillaEspecial (13, -2, tableroMovimientos);
    rellenaCasillaEspecial (18, -2, tableroMovimientos);
    rellenaCasillaEspecial (19, 3, tableroMovimientos);
    rellenaCasillaEspecial (26, -2, tableroMovimientos);
    rellenaCasillaEspecial (28, 3, tableroMovimientos);
    rellenaCasillaEspecial (31, -2, tableroMovimientos);
    rellenaCasillaEspecial (32, 3, tableroMovimientos);
    rellenaCasillaEspecial (37, -2, tableroMovimientos);
    rellenaCasillaEspecial (41, 3, tableroMovimientos);
    rellenaCasillaEspecial (45, -2, tableroMovimientos);
    // Devolución
 
}
 
int menu(){
        int eleccion;
        printf( "\n   1. Mario." );
        printf( "\n   2. Luigi." );
        printf( "\n   3. Zelda." );
        printf( "\n   4. Ken." );
        printf( "\n   5. Bison." );
        printf( "\n\n   Introduzca opci%cn (1-5): " );
 
        scanf( "%d", &eleccion );
       
        return eleccion;
   
}
int calculaNuevaPosicion (int jugadores, int tablero[], int turno) {
    int dado;
    // tirada del dado y suma a la posición actual del jugador
    dado = obtenerNumeroAleatorio(1,6);
    printf ("\tDado: %d", dado);
    jugadores += dado;
    // Si el jugador se ha pasado de la meta, se debe realizar un
    // cálculo para implementar el rebote.
    if (jugadores > META) {
        jugadores = (META*2) - jugadores;    
    }
    ///TODO: AQUI imprimirMensajeCasillaEspecial
    imprimirMensajeCasillaEspecial (jugadores[turno]);
    // Si el jugador ha caído en una casilla especial, esto se debe
    // reflejar en la posición, ya que puede aumentar o disminuir.
    // y también en los turnos, ya que estos se pueden ver afectados
    jugadores += tablero[jugadores-1];
   
   
    return jugadores;
   
   
}
int aumentarTurno (int turnoActual) {
    // Se aumenta el turno en una unidad. Si se sobrepasa el límite
    // del número de jugadores que participan, se vuelve al primero
    turnoActual++;
    if (turnoActual == JUGADORES) {
        turnoActual = 0;
    }
    return turnoActual;
}
 
void rellenaCasillaEspecial (int indice, int mov, int tableroMovimientos[]) {
    tableroMovimientos[indice-1] = mov;
}
 
/*//void todasCasillasEspeciales (int tableroMovimientos[]) {
 
    // Ocas
    rellenaCasillaEspecial (5, 3, tableroMovimientos);
    rellenaCasillaEspecial (6, -2, tableroMovimientos);
    rellenaCasillaEspecial (9, 3, tableroMovimientos);
    rellenaCasillaEspecial (13, -2, tableroMovimientos);
    rellenaCasillaEspecial (18, -2, tableroMovimientos);
    rellenaCasillaEspecial (19, 3, tableroMovimientos);
    rellenaCasillaEspecial (26, -2, tableroMovimientos);
    rellenaCasillaEspecial (28, 3, tableroMovimientos);
    rellenaCasillaEspecial (31, -2, tableroMovimientos);
    rellenaCasillaEspecial (32, 3, tableroMovimientos);
    rellenaCasillaEspecial (37, -2, tableroMovimientos);
    rellenaCasillaEspecial (41, 3, tableroMovimientos);
    rellenaCasillaEspecial (45, -2, tableroMovimientos);
 
}*/
 
void imprimirPodium(int jugadoresEnMeta[]) {
    int i, j;
    printf ("\n\n\t\t\tPODIUM DE GANADORES");
    // para poder imprimir todos los puestos del podium, se comienza
    // desde el primer puesto, y se busca en el array jugadoresEnMeta
    // aquel jugador que haya quedado en primer puesto. A continuación
    // se pasa al segundo, tercer, cuarto.... puesto
    for (i = 1; i <= JUGADORES; i++) {
        printf ("\nEn el puesto número %dº ha quedado el jugador: ", i);
        for (j = 0; j < JUGADORES; j++) {
            if (jugadoresEnMeta[j] == i) {
                printf ("%d", j+1);    
            }        
        }      
    }    
   
}
 
int juegoFinalizado (int jugadoresEnMeta[]) {
    int i;
    // Recorremos el array comprobando si cada jugador aún no ha
    // llegado a la meta. En el caso de que encontremos al menos un
    // jugador que aún está en juego, se devuelve el valor falso
    for (i = 0; i < JUGADORES; i++) {
        if (jugadoresEnMeta[i] == 0) {
            return 0;    
        }    
    }  
    return 1;
}
void imprimirMensajeCasillaEspecial (int posicion) {
    if (esCasillaEspecial(posicion)) {
        printf ("\n\t");
        switch (posicion) {
            // Caso en los que se llega a una oca
            case 5:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 6:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 9:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 13:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 18:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 19:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 26:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 28:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 31:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 32:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 37:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
            case 41:
                printf ("Has caido en un trampolin, avanzas 3 casillas");
                break;
            case 45:
                printf ("Has caido en una piedra, retrocedes dos casillas");
                break;
        }
    }
}
 
int esCasillaEspecial (int posicion) {
    switch (posicion) {
        case 5:
        case 6:
        case 9:
        case 13:
        case 18:
        case 19:
        case 26:
        case 28:
        case 31:
        case 32:
        case 37:
        case 41:
        case 45:
            return 1;
            break;
        default:
            return 0;
    }
}