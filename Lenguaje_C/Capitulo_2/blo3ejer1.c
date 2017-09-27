#include <stdio.h>
#include <stdlib.h>

/*Realiza un ejercicio que califique la nota obtenida por un alumno/a en un examen. El ejercicio pedirá al usuario la nota numérica, 
y se imprimirá en pantalla su traducción a nota de texto: muy deficiente, insuficiente, suficiente, bien, notable y sobresaliente. 
Podrás comprender mejor este ejercicio si observas el Ejercicio_014_nota_introducida_con_if_anidado.c. Sin embargo, 
el ejercicio que tú debes realizar se compondrá de una sentencia switch, no de if anidados. */

int main (int argc, char *argv[]) {

    float num;

	printf("Dime nota: ");
    scanf("%f", &num);

    switch ((int)num) {
        case 0:
        case 1:
        case 2:
            printf ("Muy deficiente");
            break;
        case 3:
        case 4:
            printf ("Deficiente");
            break;
        case 5:
        case 6:
            printf ("Suficiente");
            break;
        case 7:
        case 8:
            printf ("Notable");
            break;
        case 9:
        case 10:
            printf ("Sobresaliente");
            break;
        
        default:
            printf ("El numero no funca");
            break;
    }

    printf("\n");
    system("pause");
    return 0;
    
}
