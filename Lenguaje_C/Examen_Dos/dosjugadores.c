#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

#define NUM_BOLOS 10
#define PROB_MIN 30 //Probabilidad minima de caida de los bolos

void incializarBolos(int bolos[]);
void imprimirBolos(int bolos[]);
void lanzaBola(int bolos[], int prob[]);
int caeBolo(int prob);
int menuJugador();
int juegoFinalizado(int bolos[]);
int calcularPuntuacion(int bolos[], int caidosAntes, int numTirada);
int numBolosCaidos(int bolos[]);
void inicializarProbBolos(int prob[]);
int reducirProbBolo(int prob);


int main (int argc, char *argv[]) {
    
    int turno = 0;

    int juegoTerminadoJ1 = 0, numTiradaJ1 = 1, puntuacionJ1 = 0, caidosAntesJ1 = 0;
    int juegoTerminadoJ2 = 0, numTiradaJ2 = 1, puntuacionJ2 = 0, caidosAntesJ2 = 0;
    int bolosJ1[NUM_BOLOS], prob_bolosJ1[NUM_BOLOS];
    int bolosJ2[NUM_BOLOS], prob_bolosJ2[NUM_BOLOS];

    srand(time(NULL));
    
    printf("\t\tBienvenido a la bolera\n");
    incializarBolos(bolosJ1);
    incializarBolos(bolosJ2);
    inicializarProbBolos(prob_bolosJ1);
    inicializarProbBolos(prob_bolosJ2);

    do{
        //Juega jugador 1
        if(turno == 0 && juegoTerminadoJ1 == 0){ //Turno = 0 Jugador 1, Turno = 1 Jugador 2
            printf("\nTurno del jugador 1 Tirada %d", numTiradaJ1);
            if(menuJugador()){
                caidosAntesJ1 = numBolosCaidos(bolosJ1);

                lanzaBola(bolosJ1, prob_bolosJ1);
                printf("\n");
                imprimirBolos(bolosJ1);

                puntuacionJ1 += calcularPuntuacion(bolosJ1, caidosAntesJ1, numTiradaJ1);
                printf("\nPuntuacion Jugador 1: %d\n\n", puntuacionJ1);

                //Comprobar si todos los bolos son 0
                juegoTerminadoJ1 = juegoFinalizado(bolosJ1);
                numTiradaJ1++;

            }else{
                juegoTerminadoJ1 = 1;
            }
        }

        //Juega juagdor 2
        if(turno == 1 && juegoTerminadoJ2 == 0){
            printf("\nTurno del jugador 2 Tirada %d", numTiradaJ2);
            if(menuJugador()){
                caidosAntesJ2 = numBolosCaidos(bolosJ2);

                lanzaBola(bolosJ2, prob_bolosJ2);
                printf("\n");
                imprimirBolos(bolosJ2);

                puntuacionJ2 += calcularPuntuacion(bolosJ2, caidosAntesJ2, numTiradaJ2);
                printf("\nPuntuacion Jugador 2: %d\n\n", puntuacionJ2);

                //Comprobar si todos los bolos son 0
                juegoTerminadoJ2 = juegoFinalizado(bolosJ2);
                numTiradaJ2++;

            }else{
                juegoTerminadoJ2 = 1;
            }
        }

        turno++;
        turno %= 2;        

    } while(!juegoTerminadoJ1 || !juegoTerminadoJ2);

    printf("\nPuntuacion Jugador 1: %d", puntuacionJ1);
    printf("\nPuntuacion Jugador 2: %d", puntuacionJ2);

    if(puntuacionJ1 > puntuacionJ2){
        printf("\nEl ganador es el jugador 1");
    }
    else{
        if(puntuacionJ1 < puntuacionJ2){
            printf("\nEl ganador es el jugador 2");
        }
        else{
            printf("\nEMPATE");
        }
    }
    
    printf("\n");
    system("pause");
    return 0;
    
}


/*********************
 * Coloca todos los bolos de pie = 1
**********************/
void incializarBolos(int bolos[]){
    int i;
    for(i = 0; i < NUM_BOLOS; i++){
        bolos[i] = 1;
    }
}


/*****************
 * Imprime los bolos con forma de piramide invertida
 *****************/
void imprimirBolos(int bolos[]){
    printf("%d %d %d %d\n", bolos[9], bolos[8], bolos[7], bolos[6]);
    printf(" %d %d %d \n", bolos[5], bolos[4], bolos[3]);
    printf("  %d %d \n", bolos[2], bolos[1]);
    printf("   %d\n", bolos[0]);
}


/***********
 * Lanza la "bola" contra el array de bolos
 ***********/
void lanzaBola(int bolos[], int prob[]){
    int i;
    for(i = 0; i < NUM_BOLOS; i++){
        if(bolos[i] != 0){
            bolos[i] = caeBolo(prob[i]);
            //Si el bolo sigue en pie, se reduce la probabilidad de caida
            if(bolos[i] == 1){
                prob[i] = reducirProbBolo(prob[i]);
            }
        }
    }
}


/**************
 * Devuelve 0 o 1, diciendo si el bolo ha caido.
 * ************/
int caeBolo(int prob){
    int probabilidad;

    probabilidad = (rand() % 100) + 1;

    if(probabilidad <= prob){
        return 0;   //Si el numero aleatorio es menor que la probabilidad el bolo cae
    }
    else{
        return 1;   //Si es mayor, el bolo sigue en pie
    }
}


/***********
 * Imprime un pequeño menu para que el jugador escoja que hacer
 * ********/
int menuJugador(){
    int opcion;

    printf("\nElige una opcion");
    printf("\n1.Lanzar bola");
    printf("\n0.Salir del juego");
    printf("\nOpcion: ");

    scanf("%d", &opcion);

    return opcion;
}


/*****************************
 *  Cuenta si todos los bolos estan a 0, por lo tanto todos han caido
 * **************************/
int juegoFinalizado(int bolos[]){
    if(numBolosCaidos(bolos) == 10){
        return 1;
    }
    else{
        return 0;
    }
}


/****************
 * Calcula el valor de los bolos tirados segun el numero de tiradas que haya hecho el jugador
 * **************/
int calcularPuntuacion(int bolos[], int caidosAntes, int numTirada){
    int caidosAhora; 
    caidosAhora = numBolosCaidos(bolos) - caidosAntes;
    
    if(caidosAhora < 0){
        caidosAhora = 0;
    }

    switch (numTirada) {
            case 1:
                return 10 * caidosAhora;
                break;
            case 2:
                return 5 * caidosAhora;
                break;
            case 3: 
                return 2 * caidosAhora;
                break;
            case 4:
                return caidosAhora;
                break;
            default: 
                return 0;
    }
}


/*******************
 * Devuelve la cantiad de bolos caidos
 * *******************/
int numBolosCaidos(int bolos[]){
    int i, aux = 0; 
    for(i = 0; i < NUM_BOLOS; i++){
        if(bolos[i] == 0){
            aux++;
        }
    }
    return aux;
}


/*****************
 * Otorga a cada bolo una probabilidad diferente de ser derribado
 * *****************/
void inicializarProbBolos(int prob[]){
    int i;
    for(i = 0; i < NUM_BOLOS; i++){
        prob[i] = (rand() % 71) + PROB_MIN;
    }
}


/**************
 * Reduce la probabilida de caida del bolo
 * *************/
int reducirProbBolo(int prob){
    int aux;
    aux = (int) prob * 0.9;

    if(aux <= PROB_MIN){
        return PROB_MIN;
    }
    else{
        return aux;
    }
}