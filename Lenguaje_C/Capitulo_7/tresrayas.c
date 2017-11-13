#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>
#define LONGITUD 3

void iniciarTablero(int sup[], int med[], int bot[]);
void imprimirTablero(int sup[], int med[], int bot[]);

int main (int argc, char *argv[]) {

	int sup[LONGITUD], med[LONGITUD], bot[LONGITUD];
    int turno = 0, linea = 0, ganador = -1;

    iniciarTablero(sup, med, bot);

    printf("Turno del jugador: %d\n", turno+1);

    imprimirTablero(sup, med, bot);

    printf("\n\nEn que linea quiere colocar ficha?\n");
    printf("1.Linea Superior\n");
    printf("2.Linea Medio\n");
    printf("3.Linea Inferior\n\n");
    printf("Linea: ");
    scanf("%d", &linea);

    do{

    } while ();

    printf("\n");
    system("pause");
    return 0;
    
}


void iniciarTablero(int sup[], int med[], int bot[]){
    int i;

    for(i = 0; i < LONGITUD; i++){
        sup[i]=0;
        med[i]=0;
        bot[i]=0;
    }

}

void imprimirTablero(int sup[], int med[], int bot[]){
    int i; 

    for(i = 0; i < LONGITUD; i++){
        printf("%d ", sup[i]);
    }

    printf("\n");
    
    for(i = 0; i < LONGITUD; i++){
        printf("%d ", med[i]);
    }

    printf("\n");

    for(i = 0; i < LONGITUD; i++){
        printf("%d ", bot[i]);
    }

}


