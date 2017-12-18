#include <stdio.h>
#include <stdlib.h>

void menu(int acumulador);
void hacerJugada(int opcionesJugador[]);
int condicionVictoria(int acumulador, int opcionesJugador[]);

int main (int argc, char *argv[]) {

	int opcionesJugador[3];
    int i, acumulador = 0, jugada = -1;
    srand(time(NULL));

    do{
        //Imprime un menu enseñado valores de cada opcion
        menu(acumulador);
        printf("Opcion: ");
        scanf("%d", &jugada);
        
        //Si el usuario elige 0, se sale del programa, cualquier otra cosa sigue adelante
        if(jugada == 0){
            break;
        }

        //Se hace la tirada
        hacerJugada(opcionesJugador);

        //Se comprueban las condiciones de victoria, y se le asigna un nuevo valor al acumulador
        acumulador = condicionVictoria(acumulador, opcionesJugador);
        
        system("pause");
        system("cls");
    } while(jugada != 0);

    printf("\n");
    
    return 0;
    
}


/***********
 * Funcion que muestra las opciones del jugador
 **************/
void menu(int acumulador){
    printf("\t\t\tTRAGAPERRAS\n");
    printf("Acumulador: %d\n", acumulador);
    printf("1-Mora\n");
    printf("2-Naranja\n");
    printf("3-Campana\n");
    printf("4-Dolar\n");
    printf("Escriba algo ---- 0 para salir\n");

}


/*****************
 * Hace una jugada aleatoria
 * *****************/
void hacerJugada(int opcionesJugador[]){
    int i; 

    for(i = 0; i < 3; i++){
        opcionesJugador[i] = (rand() % 4) + 1;
        printf("Jugada %d---%d\t", i+1, opcionesJugador[i]);
    }

}


/*********
 * Se comprueba las condiciones de victoria, y se le pasa el nuevo valor del acumulador
 *********/
int condicionVictoria(int acumulador, int opcionesJugador[]){
    //Condiciones de victoria las 3 elecciones tienes que ser iguales
    if( (opcionesJugador[0] == opcionesJugador[1]) && (opcionesJugador[1] == opcionesJugador[2]) ){
        printf("\n\nHAS GANADO!!\n");
        acumulador += 1000;
        //Si ademas de ser iguales son dolar, se suma un plus al acumulador
        if(opcionesJugador[0] == 4){
            acumulador += 3000;
        }
    }
    else{
        printf("\n\nHas perdido :(\n");
        acumulador-=100;
    }

    return acumulador;
}