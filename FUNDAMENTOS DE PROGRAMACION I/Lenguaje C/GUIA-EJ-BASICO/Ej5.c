/*
Ingresar un número entero y decir si:
a) es par o impar.
b) es mayor, menor o igual a cero
*/
#include <stdio.h>

int main(){
    int n;

    printf("Ingrese un número entero, para saber si es Par o Impar: ");
    scanf("%d",& n);

    if (n%2 ==0){
        printf("El numero %d es Par", n);
    } else {
        printf("El numero %d es Impar", n);
    }

    return 0;
}