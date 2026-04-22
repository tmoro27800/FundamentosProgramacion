/*
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool es_perfecto(int num) {
    if (num <= 1) return false;
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) suma += i;
    }
    return suma == num;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (es_perfecto(n)) {
        printf("Es perfecto\n");
    } else {
        printf("No es perfecto\n");
    }

    return 0;
}
