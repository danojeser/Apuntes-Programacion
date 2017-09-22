#include <stdio.h>
#include <stdlib.h>


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
