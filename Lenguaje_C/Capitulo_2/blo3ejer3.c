#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    int opcion;
    float resultado, num1, num2;

    printf("1. Calculo de la hipotenusa de un triangulo.\n");
    printf("2. Calculo de la superficie de una circunferencia.\n");
    printf("3. Calculo del perimetro de una circunferencia.\n");
    printf("4. Calculo del area de un rectangulo.\n");
    printf("5. Calculo del area de un triangulo.\n");
    printf("0. Salir de la aplicacion.\n");
    printf("Elige una opcion: ");
    scanf("%d",&opcion);

    switch (opcion) {
        case 1: //Calculo hipotenusa
            printf("Cateto 1: ");
            scanf("%f",&num1);

            printf("Cateto 2: ");
            scanf("%f",&num2);
            
            //resultado = pow((pow(num1, 2)+pow(num2,2)),(float)1/2);
            //printf ("\nResultado: %d\n", resultado);
            break;
        case 2: //Calculo superficie circunferencia
            
            break;
        case 3: 
            printf("Dame el radio de la circunferencia: ");
            scanf("%f",&num1);
            resultado = (float)num1 * 2 * 3.1415;
            printf ("\nLa circunferencia es de: %f", resultado);
            break;
        case 4:
            printf("\nLa altura del rectangulo: ");
            scanf("%f",&num1);

            printf("\nLa base del rectangulo: ");
            scanf("%f",&num2);

            printf("El area del rectangulo es: %f",num1*num2);
            break;
        case 5:
            printf("\nLa altura del triangulo: ");
            scanf("%f",&num1);

            printf("\nLa base del triangulo: ");
            scanf("%f",&num2);

            printf("El area del triangulo es: %f",(num1*num2)/2);
            break;
        default: 
            printf ("\nOpcion incorrecta\n");
            break;
    }

    printf("\n");
    system("pause");
    return 0;
    
}
