#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

	int a, b;
    
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);

    printf("El menor es: ");
    if(a<b){
        printf("%d",a);
    }
    else{
        if(b<a){
            printf("%d",b);
        }
        else{
            printf("ninguno, los dos son iguales");
        }
    }

    return 0;
    
}
