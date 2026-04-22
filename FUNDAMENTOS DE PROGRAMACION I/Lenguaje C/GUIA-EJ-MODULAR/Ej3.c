#include <stdio.h>

// compara dos fechas separadas en día, mes y año
// devuelve -1 si la primera es anterior, 1 si la segunda es anterior, 0 si son iguales
int compararFechas(int d1, int m1, int a1, int d2, int m2, int a2) {
    if (a1 < a2) return -1;
    if (a1 > a2) return 1;
    if (m1 < m2) return -1;
    if (m1 > m2) return 1;
    if (d1 < d2) return -1;
    if (d1 > d2) return 1;
    return 0;
}

// descompone formato aammdd
void descomponerAAMMDD(int fecha, int *d, int *m, int *a) {
    *d = fecha % 100;
    *m = (fecha / 100) % 100;
    *a = fecha / 10000;
}

// descompone formato ddmmaa
void descomponerDDMMAA(int fecha, int *d, int *m, int *a) {
    *a = fecha % 100;
    *m = (fecha / 100) % 100;
    *d = fecha / 10000;
}

int main() {
    int opcion;
    printf("Comparar dos fechas\n");
    printf("1) Formato dia mes anio\n");
    printf("2) Formato aammdd\n");
    printf("3) Formato ddmmaa\n");
    printf("Seleccione opcion: ");
    scanf("%d", &opcion);

    int d1, m1, a1, d2, m2, a2;

    if (opcion == 1) {
        printf("Ingrese fecha 1 (d m a): ");
        scanf("%d %d %d", &d1, &m1, &a1);
        printf("Ingrese fecha 2 (d m a): ");
        scanf("%d %d %d", &d2, &m2, &a2);
    } else if (opcion == 2) {
        int f1, f2;
        printf("Ingrese fecha 1 (aammdd): ");
        scanf("%d", &f1);
        printf("Ingrese fecha 2 (aammdd): ");
        scanf("%d", &f2);
        descomponerAAMMDD(f1, &d1, &m1, &a1);
        descomponerAAMMDD(f2, &d2, &m2, &a2);
    } else if (opcion == 3) {
        int f1, f2;
        printf("Ingrese fecha 1 (ddmmaa): ");
        scanf("%d", &f1);
        printf("Ingrese fecha 2 (ddmmaa): ");
        scanf("%d", &f2);
        descomponerDDMMAA(f1, &d1, &m1, &a1);
        descomponerDDMMAA(f2, &d2, &m2, &a2);
    } else {
        printf("Opcion invalida\n");
        return 0;
    }

    int resultado = compararFechas(d1, m1, a1, d2, m2, a2);
    if (resultado == -1) {
        printf("La primera fecha es anterior.\n");
    } else if (resultado == 1) {
        printf("La segunda fecha es anterior.\n");
    } else {
        printf("Las fechas son iguales.\n");
    }

    return 0;
}
