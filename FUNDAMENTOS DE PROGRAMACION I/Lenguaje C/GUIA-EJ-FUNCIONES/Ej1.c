/*
 * 
 */

#include <stdio.h>

long long suma_n(int n) {
    long long suma = 0; 

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    
    return suma;
}

int main() {
    printf("CASO EJEMPLOS\n");
    printf("n = 5      -> La suma es: %lld\n", suma_n(5));
    printf("n = 120    -> La suma es: %lld\n", suma_n(120));
    printf("n = 120120 -> La suma es: %lld\n", suma_n(120120));

    return 0;
}