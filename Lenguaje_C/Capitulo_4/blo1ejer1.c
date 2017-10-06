#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Realiza un programa que le pida al usuario el límite inferior y superior de un intervalo numérico. 
Una vez hecho esto el programa debe generar un número al azar dentro de ese intervalo.*/

int main (int argc, char *argv[]) {

    int inferior, superior, aleatorio;
    
    srand(time(NULL));
    printf("Limite inferior: ");
    scanf("%d",&inferior);
        
    printf("Limite superior: ");
    scanf("%d",&superior);

    aleatorio = rand() % (superior - inferior +1) + inferior;
    printf ("Número aleatorio: %d", aleatorio);
    

    printf ("\n");
    system ("pause");
    return 0;    
    
}
