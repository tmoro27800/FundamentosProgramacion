/*
 * 
 */

#include <stdio.h>

void main(){

    int n,cubo;
    n=1;

    while (n != 0)
    {
        printf("Ingrese un numero \n");
        scanf("%d",&n);
        if (n==0){
            break;
        }
        cubo= n*n*n;

        printf("El cubo de %d es: %d\n",n,cubo);
    }
    printf("\nPROGRAMA FINALIZADO\n");

    return;
}