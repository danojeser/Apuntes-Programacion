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
    
    printf("La media de los tres es: %f",(float) (a+b+c)/3);
    
	return 0;
}
