/*
 * 
 */

#include <stdio.h>

void leer_AB (int a, int b){
    printf("Leer a: %d\n", a);
    printf("Leer b: %d\n", b);
    return;
}

int calcular_C (int *a, int *b){
    int c;    
    c= *a+*b;
    return c;
}

void leer_C (int c){
    printf("Leer c: %d\n", c);
    return;
}

void main(){
    int a=5;
    int b=10;
    int c;
    leer_AB(a,b);

    c=calcular_C(&a,&b);

    leer_C(c);

    return;
}