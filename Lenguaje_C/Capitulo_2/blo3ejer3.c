#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    int opcion, num1, num2, resultado;

    printf("1. Cálculo de la hipotenusa de un triángulo.");
    printf("2. Cálculo de la superficie de una circunferencia.");
    printf("3. Cálculo del perímetro de una circunferencia.");
    printf("4. Cálculo del área de un rectángulo.");
    printf("5. Cálculo del área de un triángulo.");
    printf("0. Salir de la aplicación.");
    printf("Elige una opcion: ");
    scanf("%d",&opcion);

    switch (opcion) {
        case 1: //Calculo hipotenusa
            printf("Cateto 1: ");
            scanf("%d",&num1);

            printf("Cateto 2: ");
            scanf("%d",&num2);
            
            resultado = pow((pow(num1, 2)+pow(num2,2)),(float)1/2);
            printf ("\nResultado: %d\n", resultado);
            break;
        case 2: //Calculo superficie circunferencia
            resultado = ;
            printf ("\nResultado: %d\n", resultado);
            break;
        case 3: 
            resultado = num1 % num2;
            printf ("\nResultado: %d\n", resultado);
            break;
        case 4:
            break;
        case 5:
            break;
        default: 
            printf ("\nOpcion incorrecta\n");
            break;
    }
    return 0;
    
}
