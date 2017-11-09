/*  Librería que aglutina diferentes funciones para el manejo de
    los arrays unidimensionales
*/


// Declaración de funciones
int *inicializaAzarArrayMinimoMaximo (int array[], int longitud, int minimo, int maximo);
int *inicializaAzarArray (int array[], int longitud);
void imprimeArray (int array[], int longitud);
int sumaArray (int array[], int longitud);
float mediaArray (int array[], int longitud);
int mayorArray (int array[], int longitud);
int menorArray (int array[], int longitud);



/**********************************************************************
    Función sumaArray
        Calcula la suma de todos los elementos del array, y la devuelve
        como argumento de salida
    Argumentos de entrada
        int array[] - Array cuyos elementos se van a sumar
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int - Suma de todos los elementos del array
**********************************************************************/
int sumaArray (int array[], int longitud) {
    // Declaración de variables
    int i, suma = 0;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        suma += array[i];
    }    
    // Devolución
    return suma;
}



/**********************************************************************
    Función inicializaAzarArray
        Inicializa al azar todos los valores del array que le pasemos
        como argumento de entrada
    Argumentos de entrada
        int array[] - Array cuyos elementos se van a inicializar
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int * - Array modificado
**********************************************************************/
int *inicializaAzarArrayMinimoMaximo (int array[], int longitud, int minimo, int maximo) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        array[i] = obtenerNumeroAleatorio (minimo, maximo);
    }    
    // Devolución
    return array;
}




/**********************************************************************
    Función inicializaAzarArray
        Inicializa al azar todos los valores del array que le pasemos
        como argumento de entrada
    Argumentos de entrada
        int array[] - Array cuyos elementos se van a inicializar
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int * - Array modificado
**********************************************************************/
int *inicializaAzarArray (int array[], int longitud) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        array[i] = obtenerNumeroAleatorio (0, 100);
    }    
    // Devolución
    return array;
}




/**********************************************************************
    Función imprimeArray
        Imprime en pantalla todos los elementos del array que
        recibe como argumento de entrada        
    Argumentos de entrada
        int array[] - Array cuyos elementos se van a sumar
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        void
**********************************************************************/
void imprimeArray (int array[], int longitud) {
    // Declaración de variables
    int i;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        printf ("%d\t", array[i]);
    }    
    printf ("\n");
}





/**********************************************************************
    Función mediaArray
        Calcula la media de todos los elementos del array, y la devuelve
        como argumento de salida
    Argumentos de entrada
        int array[] - Array con los elementos de entrada
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int - Media de todos los elementos del array
**********************************************************************/
float mediaArray (int array[], int longitud) {
    // Declaración de variables
    int i, suma = 0;
    // For que realiza la suma en el acumulador
    for (i = 0; i < longitud; i++) {
        suma += array[i];
    }    
    // Devolución
    return (float) suma / longitud;
}






/**********************************************************************
    Función mayorArray
        Calcula el mayor de todos los elementos del array, y la devuelve
        como argumento de salida
    Argumentos de entrada
        int array[] - Array con los elementos de entrada
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int - Mayor de todos los elementos del array
**********************************************************************/
int mayorArray (int array[], int longitud) {
    // Declaración de variables
    int i, mayor = 0;
    
    // si no existe ningún elemento, se devuele el 0
    if (longitud > 0) {
        mayor = array[0];
        // For que realiza la suma en el acumulador
        for (i = 1; i < longitud; i++) {
            if (array[i] > mayor) {
                mayor = array[i];    
            }
        }    
    }
    // Devolución
    return mayor;
}



/**********************************************************************
    Función menorArray
        Calcula el menor de todos los elementos del array, y la devuelve
        como argumento de salida
    Argumentos de entrada
        int array[] - Array con los elementos de entrada
        int longitud - Cantidad total de elementos del array.
    Argumentos de salida
        int - Menor de todos los elementos del array
**********************************************************************/
int menorArray (int array[], int longitud) {
    // Declaración de variables
    int i, menor = 0;
    
    // si no existe ningún elemento, se devuele el 0
    if (longitud > 0) {
        menor = array[0];
        // For que realiza la suma en el acumulador
        for (i = 1; i < longitud; i++) {
            if (array[i] < menor) {
                menor = array[i];    
            }
        }    
    }
    // Devolución
    return menor;
}
