#include <stdio.h>
#include <stdlib.h>
#include <libreriaArray.c>
#include <libreria.c>

void suma(int *var1, int *var2, int *resultado);
void resta(int *var1, int *var2, int *resultado);
void multiplicacion(int *var1, int *var2, int *resultado);
void division(int *var1, int *var2, int *resultado);

int main (int argc, char *argv[]) {

	// Declaración de variables
    int num1, num2, resultado, opcion;
    
   // Impresión del menú.
   opcion = mostrarMenu ();
   
   // Lectura de los dos números necesarios para cualquier operación
   if ((opcion > 0) && (opcion < 5)) {
          printf ("\n\nIntroduzca el primer número: ");
          scanf ("%d", &num1);
          printf ("\nIntroduzca el segundo número: ");
          scanf ("%d", &num2);
   }
   
   // switch para conseguir la operación
   switch (opcion) {
          case 0: // Salimos del programa sin realizar acción alguna
               printf ("\nADIOS");
               break;
          case 1: // Se selecciona una suma
               suma(&num1, &num2, &resultado);
               printf ("\nResultado: %d\n", resultado);
               break;
          case 2: // Se selecciona una resta
               resta(&num1, &num2, &resultado);
               printf ("\nResultado: %d\n", resultado);
               break;
          case 3: // Se selecciona una multiplicación
               multiplicacion(&num1, &num2, &resultado);
               printf ("\nResultado: %d\n", resultado);
               break;
          case 4: // Se selecciona una división
               division(&num1, &num2, &resultado);
               printf ("\nResultado: %d\n", resultado);
               break;
          default: // Opción incorrecta en el menú
               printf("\nOpción incorrecta\n");
               break;
   }

    printf("\n");
    system("pause");
    return 0;
    
}


int mostrarMenu () {
    int opcion;
   // Impresión del menú. 
   printf ("\nMENU DE CALCULADORA");
   printf ("\n\t1.- Suma");
   printf ("\n\t2.- Resta");
   printf ("\n\t3.- Multiplicación");
   printf ("\n\t4.- División");
   printf ("\n\n\t0.- Salir");
   printf ("\n\n\tIntroduzca una opción: ");
   // Lectura de la opción elegida por el usuario
   scanf ("%d", &opcion);
   return opcion;
}


void suma(int *var1, int *var2, int *resultado){
    *(resultado) = *(var1) + *(var2);
}

void resta(int *var1, int *var2, int *resultado){
    *(resultado) = *(var1) - *(var2);
}


void multiplicacion(int *var1, int *var2, int *resultado){
    *(resultado) = *(var1) * *(var2);
}


void division(int *var1, int *var2, int *resultado){
    *(resultado) = *(var1) / *(var2);
}