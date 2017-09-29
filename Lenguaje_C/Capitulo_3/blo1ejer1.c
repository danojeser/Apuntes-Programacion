#include <stdio.h>
#include <stdlib.h>


/*Realiza un programa en C que pida al usuario cuatro números enteros, y calcule la suma solo de aquellos números 
introducidos por el usuario, que sean mayores de 10. Es decir, que si el usuario introduce el 5, el 15, el 6 y 
el 25, el programa debe calcular la suma solo de 15 más 25, ya que 5 y 6 son menores de 10.*/

int main (int argc, char *argv[]) {

    int num,acum;
    acum=0;

    for(int i = 0; i<4; i++){
        printf("Introduce numero: ");
        scanf("%d",&num);
        if(num > 10){
            acum+=num;
        }
    }

    printf("El acumulador es: %d",acum);
    
    printf("\n");
    system("pause");
    return 0;
    
}
