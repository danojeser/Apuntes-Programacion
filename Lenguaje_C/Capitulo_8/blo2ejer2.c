#include <stdio.h>
#include <stdlib.h>
#include <libreria.c>

#define FILAS 5
#define COLUMNAS 7

void visualizaMatriz (float matriz[FILAS][COLUMNAS]);
void inicializaMatriz (float matriz[FILAS][COLUMNAS]);
void notaMediaAlumno(int id, float matriz[FILAS][COLUMNAS]);
void notaMediaExamen(int examen, float matriz[FILAS][COLUMNAS]);
void notaMediaCurso(float matriz[FILAS][COLUMNAS]);


int main (int argc, char *argv[]) {
    float notasAlumnado[FILAS][COLUMNAS]; 

    inicializaMatriz (notasAlumnado);
	visualizaMatriz (notasAlumnado);
	notaMediaAlumno(101, notasAlumnado);
	notaMediaExamen(2, notasAlumnado);
	notaMediaCurso(notasAlumnado);
     
    printf ("\n"); 
    system("pause");
    return 0;   
}


//Pone "notas" de -3 a 10, con decimales, a los alumnos
void inicializaMatriz (float matriz[FILAS][COLUMNAS]) {
    int i, j;
    float aux;
    
    for (i = 0; i < FILAS; i++) {
    	for (j = 0; j < COLUMNAS; j++) {
    		if (j == 0) {
    			matriz[i][j] = 101+i;
			}
			else {
				aux = obtenerNumeroAleatorio(-30, 100) / 10.0;
				if (aux >= 0) {
					matriz[i][j] = aux;
				}
				else {
					matriz[i][j] = -1;
				}
			}
		}
	}
}


//Simplemente visualiza la matriz
void visualizaMatriz (float matriz[FILAS][COLUMNAS]) {
	int i, j;
    printf ("\n\nMATRIZ\n");
    for (i = 0; i < FILAS; i++) {
    	printf("\n Fila:");
    	for (j = 0; j < COLUMNAS; j++) {
    		printf ("\t%.3f", matriz[i][j]);
		}
	}
}


//Calcula e imprime la nota media del alumno dado por ID
void notaMediaAlumno(int id, float matriz[FILAS][COLUMNAS]){
	int i, j, cont = 0;
	float acum = 0;

	for(i = 0; i < FILAS; i++){
		if(matriz[i][0] == id){
			for(j = 1; j < COLUMNAS; j++){
				if(matriz[i][j] >= 0){
					acum += matriz[i][j];
					cont++;
				}
			}
		break;
		}
	}
	printf("\nLa nota media del alumno %d es: %f", id, (float) acum/cont);

}


//Nota media de la clase de un examen dado por parametro
void notaMediaExamen(int examen, float matriz[FILAS][COLUMNAS]){
	int i, cont = 0;
	float acum = 0;

	for(i = 1; i < FILAS; i++){
		if(matriz[i][examen] >= 0){
			acum += matriz[i][examen];
			cont++;
		}
	}

	printf("\nLa nota media del examen %d es: %f", examen, (float)acum/cont);
}


//Calcula la nota media del curso
void notaMediaCurso(float matriz[FILAS][COLUMNAS]){
	int i, j, cont = 0;
	float acum = 0;

	for(i = 0; i < FILAS; i++){
		for(j = 1; j < COLUMNAS; j++){
			if(matriz[i][j] >= 0){
				acum += matriz[i][j];
				cont++;
			}
		}
	}

	printf("La nota media del curso es: %f", (float)acum/cont);

}