#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

#define NUM_BOLOS 10
#define PROB_MIN 30 //Probabilidad minima de caida de los bolos

void incializarBolos(int bolos[]);
void imprimirBolos(int bolos[]);
void lanzaBola(int bolos[]);
int caeBolo();
int menuJugador();
int juegoFinalizado(int bolos[]);
int calcularPuntuacion(int bolos[], int caidosAntes, int numTirada);
int numBolosCaidos(int bolos[]);

int main (int argc, char *argv[]) {

    int juegoTerminado = 0, numTirada = 1, puntuacion = 0, caidosAntes = 0;
	int bolos[NUM_BOLOS];
    
    srand(time(NULL));
    
    printf("\t\tBienvenido a la bolera\n");
    incializarBolos(bolos);

    do{
        if(menuJugador()){
            caidosAntes = numBolosCaidos(bolos);

            lanzaBola(bolos);
            printf("\n");
            imprimirBolos(bolos);

            puntuacion += calcularPuntuacion(bolos, caidosAntes, numTirada);
            printf("Puntuacion: %d", puntuacion);

            //Comprobar si todos los bolos son 0
            juegoTerminado = juegoFinalizado(bolos);
            numTirada++;

        }else{
            juegoTerminado = 1;
        }

    } while(!juegoTerminado);


    printf("\nFuera de juego");
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
void lanzaBola(int bolos[]){
    int i;
    for(i = 0; i < NUM_BOLOS; i++){
        if(bolos[i] != 0){
            bolos[i] = caeBolo();
        }
    }
}


/*********
 * TODO: Pasar un valor con la probabilidad de caida del bolo
 * Devuelve 0 o 1, diciendo si el bolo ha caido.
 * 
 * ************/
int caeBolo(){
    int probabilidad;

    probabilidad = (rand() % 100) +1;

    if(probabilidad < PROB_MIN){
        return 0;   //Si el numero aleatorio es menor que la probabilidad minima el bolo cae
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