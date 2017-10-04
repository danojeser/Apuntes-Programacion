#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Realiza una calculadora avanzada, del tipo del Ejercicio_016_switch_ejemplo_de_calculadora.c, 
pero con la particularidad de que las operaciones deben ser raices, potencias y el módulo de la división.*/

int main (int argc, char *argv[]) {

    int num1, num2, resultado, opcion;
    
    // Impresion del menu. 
    printf ("\nMENU DE CALCULADORA");
    printf ("\n\t1.- Raiz");
    printf ("\n\t2.- Potencia");
    printf ("\n\t3.- Modulo");
    printf ("\n\n\t0.- Salir");
    printf ("\n\n\tIntroduzca una opcion: ");
    // Lectura de la opcion elegida por el usuario
    scanf ("%d", &opcion);

    if ((opcion > 0) && (opcion < 4)) {
        printf ("\n\nIntroduzca el primer numero: ");
        scanf ("%d", &num1);
        printf ("\nIntroduzca el segundo numero: ");
        scanf ("%d", &num2);
    }

// switch para conseguir la operaci�n
    switch (opcion) {
        case 0: // Salimos del programa sin realizar acci�n alguna
            printf ("\nADIOS");
            break;
        case 1: // Se selecciona una raiz
            resultado = pow(num1, 1.0/num2);
            printf ("\nResultado: %d\n", resultado);
            break;
        case 2: // Se selecciona una potencia
            resultado = pow(num1, num2);
            printf ("\nResultado: %d\n", resultado);
            break;
        case 3: // Se selecciona una modulo
            resultado = num1 % num2;
            printf ("\nResultado: %d\n", resultado);
            break;
        default: // Opcion incorrecta en el menu
            printf ("\nOpcion incorrecta\n");
            break;
    }


    printf("\n");
    system("pause");
    return 0;
    
}
