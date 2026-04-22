/*
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int num){
    if (num < 0) return false;
    int original = num;
    int invertido = 0;
    while (num > 0){
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10; 
    }
    return original == invertido;
}

int InputUsuario(){
    int n;
    printf("Ingrese un valor para ver si es Capicua: ");
    scanf("%d",& n);
    return n;
}

void Ciclo(){
    int n=1;
    while (n!=0){
        n = InputUsuario();
        if(n != 0){
            if (n > 0){
                if (es_capicua(n)){
                    printf("%d -> Capicua\n",n);
                } else {
                    printf("%d -> No Capicua\n",n);
                }
            } else {
                printf("Numero Invalido\n");
            }
        }
    }
}

void main(){
    Ciclo();
    printf("Fin del Programa\n");
    return;
}