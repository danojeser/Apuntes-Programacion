#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>
#define LONGITUD 100

void inicializarTablero(int array[]);
void imprimirTablero(int array[]);

int main (int argc, char *argv[]) {

	int tablero[LONGITUD];
    int bombas = 10, opcion;
    srand(time(NULL));

    inicializarTablero(tablero);
    imprimirTablero(tablero);

    do{
        printf("Pulse 1 para lanzar bomba, cualquier otra cosa para salir: ");
        scanf("%d", &opcion);
        
        if(opcion == 1){
            lanzarBomba(tablero);
        }
        else{
            bombas = 0;
        }

    } while(bombas > 0);

    printf("\n");
    system("pause");
    return 0;
    
}


void inicializarTablero(int array[]){
    int i, aux;

    for(i = 0; i < LONGITUD; i++){
        aux = rand() % 100 + 1;
        
        if(aux <= 50){
            array[i] = 0;
        }
        else{
            if(aux > 50 && aux <= 75){
                array[i] = 1;
            }
            else{
                array[i] = 2;
            }
        }
    }
}

void imprimirTablero(int array[]){
    int i; 

    for(i = 0; i < LONGITUD; i++){
        printf("%d\t", array[i]);
    }
}
