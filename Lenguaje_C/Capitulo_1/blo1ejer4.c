#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
	int a;
	printf("Primer numero: ");
    scanf("%d", &a);
    
    
    if(a>0){
    	printf("Es positivo");
	}
	else{
		if(a<0){
			printf("Es negativo");
		}
		else{
			printf("El numero es cero");
		}
	}
    
	return 0;
}
