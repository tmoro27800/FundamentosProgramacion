#include <stdio.h>

int MaximoComunDivisor(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int InputUsuario(){
    int n;
    printf("Ingrese valor n: ");
    scanf("%d", &n);
    return n;
}

int main() {
    printf("MCD -> %d\n", MaximoComunDivisor(InputUsuario(), InputUsuario()));
    return 0;
}
