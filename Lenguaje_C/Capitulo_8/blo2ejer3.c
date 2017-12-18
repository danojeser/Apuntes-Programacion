#include <stdio.h>
#include <stdlib.h>
#include <libreria.c>

#define FILAS 5
#define COLUMNAS 13

void inicializarDatos(int datos[FILAS][COLUMNAS]);
void imprimirDatos(int datos[FILAS][COLUMNAS]);

int main (int argc, char *argv[]) {

	int datos[FILAS][COLUMNAS];
    
    inicializarDatos(datos);
    imprimirDatos(datos);

    printf("\n");
    system("pause");
    return 0;
    
}


void inicializarDatos(int datos[FILAS][COLUMNAS]){
    int i, j, anio = 2012; 

    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            if(i == 0 && j == 0){
                datos[i][j] = anio;
                anio++;
            }
            else{
                datos[i][j] = obtenerNumeroAleatorio(0, 200);
            }
        }
    }
}

void imprimirDatos(int datos[FILAS][COLUMNAS]){
    int i, j;

    for(i = 0; i < FILAS; i++){
        for(j = 0; j < COLUMNAS; j++){
            printf("%d", datos[FILAS][COLUMNAS]);
        }
        printf("\n");
    }
}