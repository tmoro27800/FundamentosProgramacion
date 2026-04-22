/*
Dado un número n, informar los n primeros términos de la sucesión geométrica de
razón 3 (1, 3, 9, 27, etc.).
 */

#include <stdio.h>

void main(){
    int termino=1;
    int n;

    printf("Ingresa n veces a mostrar sucession: ");
    scanf("%d",& n);

    for (int i=0; i < n; i++){
        printf("Numero: %d \n",termino);
        termino= termino*3;
    }

    return;
}