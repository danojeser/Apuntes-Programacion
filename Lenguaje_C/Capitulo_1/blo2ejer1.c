#include <stdio.h>
#include <stdlib.h>

/*Programa que muestre los "n' primeros términos de la serie de Fibonacci. La serie de Fibonacci se caracteriza 
en que cada término es igual a la suma de los dos anteriores. Ejemplo: A1=1 A2=1 A3=2 A4=3 A5=5 A6=8 | An=An-1+ An-2.*/ 

int main (int argc, char *argv[]) {

	int num, acum, anta, antb;
    
    acum=1;
    anta=0;
    antb=0;

    printf("Cuantos numeros quieres ver: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("%d,",acum);
        anta=antb;
        antb=acum;
        acum= anta+antb;
            
    }



    return 0;
    
}
