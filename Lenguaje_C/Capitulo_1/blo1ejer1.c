#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
	int a, b, c;
	printf("Primer numero: ");
    scanf("%d", &a);
    
    printf("Segundo numero: ");
    scanf("%d", &b);
    
    printf("Tercer numero: ");
    scanf("%d", &c);
    
    if((a > b) && (a > c )){
    	printf("El mayor es: %d", a);
	}
	else{
		if((b > a) && (b > c )){
			printf("El mayor es: %d",b);
		}
		else{
			printf("El mayor es: %d",c);
		}
	}
    
	return 0;
}
