#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; 
    if (num % 2 == 0) return false;

    for (int i = 3; i <= num / 2; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int InputUsuario() {
    int n;
    printf("Ingrese un numero n: ");
    scanf("%d", &n);
    return n;
}

void ListadoCiclo() {
    int suma = 0;
    int n;
    n = InputUsuario();
    for(int num=1; num <= n; num++){
        if (es_primo(num)) {
            printf("%d -> primo\n", num);
            suma += num;
        } else {
            printf("%d -> no primo\n", num);
        }
    }
    printf("La suma de los primos ingresados es: %d\n", suma);
}

int main(void) {
    ListadoCiclo();
    return 0;
}
