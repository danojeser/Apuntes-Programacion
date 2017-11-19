#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {

    int numero = 1, i, tiempoInicio, tiempoFin;

    for(;numero != 0;){
        printf("Numero del que desea conocer los divisores: ");
        scanf("%d", &numero);

        if( numero == 0 ){
            printf("Saliendo del programa");
        }
        else{
            tiempoInicio = time(NULL);
            
            for(i = 1; i <= (numero/2); i++){
                if(numero % i == 0){
                    printf("El numero %d es divisor de %d\n", i, numero);
                }
            }
            
            tiempoFin = time(NULL);
            printf("Se han tardado %d segundos en calcular los divisores\n", tiempoFin-tiempoInicio);
        }
    }

	

    printf("\n");
    system("pause");
    return 0;
    
}
