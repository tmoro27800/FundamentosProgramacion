#include <stdio.h>
#include <stdbool.h>

long long factorial(int num){
    long long resultado = 1; 
    for(int i = 1; i <= num; i++){
        resultado *= i;
    }
    return resultado; 
}

bool es_primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int calculoEnesima(int num){
    return (num * (num + 1)) / 2;
}   

int inputUsuario(){
    int n;
    do {
        printf("Ingrese un numero (1-20): ");
        scanf("%d", &n);
    } while (n < 1 || n > 20);
    return n;
}

int main(){
    int n = inputUsuario();
    
    if (es_primo(n)){
        printf("El numero %d es primo. Factorial -> %lld\n", n, factorial(n));
    } else {
        printf("El numero %d no es primo. Suma E-nesima -> %d\n", n, calculoEnesima(n));
    }
    return 0;
}
