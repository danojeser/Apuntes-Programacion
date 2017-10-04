#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa que lea el importe de una compra y la cantidad recibida y calcule el cambio 
a devolver, teniendo en cuenta que el número de monedas que se devuelven debe ser mínimo. 
Suponer que el sistema monetario utilizado consta de monedas de 100, 50, 25, 5, y 1 unidad. 
El precio viene dado en unidades monetarias enteras. 
Ejemplo: Pagamos con 2000 unidades monetarias un articulo que nos cuesta 375 unidades monetarias, 
la vuelta (1625 u) debería de ser de la siguiente forma: 
- 16 monedas de 100 = 1600 
- 1 moneda de 25 = 25*/

int main (int argc, char *argv[]) {

    int precio, dinero, cambio;

    printf("Precio del producto: ");
    scanf("%d",&precio);

    printf("Dinero introducido: ");
    scanf("%d",&dinero);

    if(dinero < precio){
        printf("Venga crack, GL in esports");
    }
    else{
        cambio = dinero - precio;
        if(cambio > 100){
            printf("\nMonedas de 100: %d", cambio/100);
            cambio = cambio % 100;
        }
        if(cambio > 50){
            printf("\nMonedas de 50: %d", cambio/50);
            cambio = cambio % 50;
        }
        if(cambio > 25){
            printf("\nMonedas de 25: %d", cambio/25);
            cambio = cambio % 25;
        }
        if(cambio > 5){
            printf("\nMonedas de 5: %d", cambio/5);
            cambio = cambio % 5;
        }
        if(cambio > 1){
            printf("\nMonedas de 1: %d", cambio);
        }
    }
    
    printf("\n");
    system("pause");
    return 0;
}
