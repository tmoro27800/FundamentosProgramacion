
/*
 * 
 */

#include <stdio.h>

void main(){
    
    int edad;
    int* p1; // Se crea una variable que luego va a guardar un puntero de la variable Edad.

    edad=12;

    printf("Se imprime el valor dentro de la variable => Edad= %d\n", edad);

    p1= &edad; // SE GUARDA EL PUNTERO DE LA VARIABLE EDAD (USANDO EL "&" antes de la variable)

    printf("Se imprime el valor del puntero => Edad= %p\n", p1);

    *p1=15; // Aunq ue se modifica el puntero p1 se esta modificadno realmente el valor de la variable Edad al modificar la variable donde esta el puntero en este caso Edad.

    printf("Se imprime el valor de la variable luego de ser modificado desde su Puntero Edad= %d\n", edad);


    return;
}