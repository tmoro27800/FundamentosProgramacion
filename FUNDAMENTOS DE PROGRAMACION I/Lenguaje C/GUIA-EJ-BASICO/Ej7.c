/*
Ingresar un número (del 1 al 7) que representa un día de la semana, escribir el
nombre del día correspondiente. En el caso de haber ingresado un número fuera de
rango indicarle del error al usuario.
*/

#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un dia y se mostrara el dia de la semana correspondiente (1-7): ");
    scanf("%d",& n);

    switch (n)
    {
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Error, no corresponde a ningun dia de la semana");
        break;
    }

    return 0;
}