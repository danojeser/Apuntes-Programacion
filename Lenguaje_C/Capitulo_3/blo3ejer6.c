#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que pida números al usuario, hasta que uno de ellos sea 0 (cero). Para cada número 
introducido se debe mostrar en pantalla su tabla de multiplicar, desde el 0 (cero) hasta el 10. */

int main (int argc, char *argv[]) {

	int num = 1, i;
    
	for( ; num != 0; ){
        printf("Introduce un numero:");
        scanf("%d", &num);

        if(num != 0){
            for(i = 0; i<11; i++){
                printf("%d x %d = %d\n",num, i, i*num);
            }
        }
        
        printf("\n");
    }
    
    printf("\n");
    system("pause");
    return 0;
    
}
