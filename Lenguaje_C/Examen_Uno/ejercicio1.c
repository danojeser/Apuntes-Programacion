#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    int opcion=1, aleatorio;
    float num1, num2;

    srand(time(NULL));
    
    for (;opcion != 0;){
        system("cls");
        printf("\t\tMENU");
        printf("\n1.-Area del triangulo");
        printf("\n2.-Perimetro de la circunferencia");
        printf("\n3.-Numeros al azar");
        printf("\n0.-Salir");

        printf("\n\nQue opcion quiere?: ");
        scanf("%d",&opcion);

        switch (opcion) {
            case 1:
                system("cls");
                printf("AREA DEL TRIANGULO");
                
                printf("\nValor del cateto 1: ");
                scanf("%f",&num1);
                printf("\nValor del cateto 2: ");
                scanf("%f",&num2);

                printf("\nEl area del triangulo es: %f unidades cuadradas", (num1 * num2)/2);
                printf("\n");
                system("pause");
                break;

            case 2:
                system("cls");
                printf("PERIMETRO DE LA CIRCUNFERENCIA");
                
                printf("\nRadio de la circunferencia: ");
                scanf("%f",&num1);

                printf("El perimetro de la circunferencia con radio %fu es de: %f unidades", num1, (2*num1*3.1416));
                printf("\n");
                system("pause");
                break;

            case 3:
                system("cls");
                printf("NUMEROS AL AZAR\n");
                aleatorio = 0;

                for(;aleatorio != 47;){
                    aleatorio = rand() % 101;
                    printf("%d\t", aleatorio);
                }

                printf("\n");
                system("pause");
                break;

            case 0:
                printf("Saliendo del programa");
                break;
                
            default:
                printf("\nOpcion erronea, escriba una opcion correcta\n");
                system("pause");
        }
    }
    
    printf("\n");
    system("pause");
    return 0;
    
}
