/*
 *
 */

#include <stdio.h>
#include <stdbool.h>

int suma_divisores(int num){
    int suma = 0;
    for(int i=1; i < num; i++){
        if ( num % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

bool son_amigos(int a, int b){
    bool son_amigos = false;
    int suma_a,suma_b;

    suma_a = suma_divisores(a);
    suma_b = suma_divisores(b);

    if ( suma_a == b || suma_b == a ){
        son_amigos = true;
        return son_amigos;
    }

    return son_amigos;
}

void main(){
    int a,b;
    printf("SON AMIGOS?\n");
    
    printf("Ingrese valor a: ");
    scanf("%d",& a);

    printf("Ingrese valor b: ");
    scanf("%d",& b);

    if (son_amigos(a,b)){
        printf("Son Amigos\n");
    } else {
        printf("No son Amigos\n");
    }

    return;
}