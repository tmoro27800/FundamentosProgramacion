/*
Ingresar tres números y hallar el mayor.
*/

#include <stdio.h>

int main(){
    int n1,n2,n3; 

    printf("Ingrese el primero numero: ");
    scanf("%d",& n1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",& n2);

    printf("Ingrese el tercer numero: ");
    scanf("%d",& n3);

    if ( n1 > n2 && n1 > n3){
        printf("El numero mayor es: %d",n1);
    } else {
        if(n2 > n1 && n2 > n3){
            printf("El numero mayor es: %d",n2);
        } else {
            printf("El numero mayor es: %d",n3);
        }
    }

    return 0;
}