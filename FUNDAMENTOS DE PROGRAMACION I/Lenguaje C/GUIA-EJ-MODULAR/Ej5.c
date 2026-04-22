#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num) {
    if (num <= 1) return false;   // 0 y 1 no son primos
    if (num == 2) return true;    // 2 es primo
    if (num % 2 == 0) return false; // múltiplos de 2 no son primos

    for (int i = 3; i <= num / 2; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int InputUsuario() {
    int n;
    printf("Ingrese un numero (0 para terminar): ");
    scanf("%d", &n);
    return n;
}

void ListadoCiclo() {
    int suma = 0;
    int n;

    do {
        n = InputUsuario();
        if (n != 0) {
            if (es_primo(n)) {
                printf("%d -> primo\n", n);
                suma += n;
            } else {
                printf("%d -> no primo\n", n);
            }
        }
    } while (n != 0);

    printf("La suma de los primos ingresados es: %d\n", suma);
}

int main(void) {
    ListadoCiclo();
    return 0;
}
