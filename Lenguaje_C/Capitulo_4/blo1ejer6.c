#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Realiza un programa en C que presente un menú en pantalla. El menú debe ofrecer al usuario una opción 
para abandonar el programa y otra para jugar al sorteo de "La ONCE". Cuando se elija jugar se debe pedir 
al usuario un número de cinco cifras y el programa debe asegurarse de que sea un número no superior de 
cinco cifras. El programa debe generar el número elegido poco a poco: primero las decenas de millar, 
después las unidades de millar, las centenas y así sucesivamente. Al final se debe comparar el número 
elegido por el ordenador con el número seleccionado por el usuario. El programa debe acabar comparando 
los dos números cifra a cifra.*/

int main (int argc, char *argv[]) {

    int opcion, numero, numGanador=0, i, cifra;
    
    srand(time(NULL));

    printf("1.-Jugar a la ONCE");
    printf("\n0.-Salir del programa");
    printf("\nIntroduce una opcion: ");
    scanf("%d", &opcion);

    if(opcion == 1){
        printf("\nIntroduce tu numero(0-99999): ");
        scanf("%d",&numero);

        if(numero > 99999 || numero < 0){
            printf("\nERROR. Numero no computable");
            printf("\nSAYONARA");
            
            printf("\n");
            system("pause");
            return 1;
        }

        for(i = 10000; i>0; i=i/10){ 
            cifra = rand() % 10;
            numGanador += (i * cifra);
            printf("\nCifra: %d", cifra);
        }

        printf("\nEl numero ganador es: %d", numGanador);
        printf("\nComparemos los numeros");
        printf("\nTuyo\tMio");
        
        for(i = 10000; i>0; i=i/10){
            printf("\n%d----%d",(numero/i),(numGanador/i));
            numero -= (numero / i * i);
            numGanador -= (numGanador / i * i);
        }

        if(numero == numGanador){
            printf("GG");
        }
        

    }

    printf("\n");
    system("pause");
    return 0;
    
}