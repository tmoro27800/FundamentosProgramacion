/*
 *11) Escribir una función que dado un código numérico de m dígitos, retorne un
sub-código consistente en una cantidad 0 < n < m de dígitos a partir del k-ésimo
lugar a contar del dígito menos significativo.
Los parámetros de la función deben ser código, n y k.
En el caso que los parámetros no sean consistentes y la extracción no puede
realizarse la función debe retornar -1.
Si el sub-código contiene ceros a izquierda serán ignorados en el valor
entregado como resultado.
 */

#include <stdio.h>

int Potenciar10(int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= 10;
    }
    return resultado;
}

int subCodigo(int codigo, int n, int k){
    int PosicionInicial = codigo / Potenciar10(k);
    return PosicionInicial % Potenciar10(n);
}

void main(){
    int codigo,n,k;

    printf("Ingrese el codigo: ");
    scanf("%d",&codigo);

    printf("Ingrese valor n: ");
    scanf("%d",&n);

    printf("Ingrese valor k: ");
    scanf("%d",&k);

    printf("El subcodigo obtenido es: %d\n", subCodigo(codigo,n,k));

    return;
}