/* 
Hallar la superficie de un triángulo conociendo la base y la altura. Solicitarle los
datos de entrada al usuario
*/
#include <stdio.h>

void main(){

    float altura;
    float base;
    float superficie;
    
    printf("Ingrese la altura del Triangulo: \n");
    scanf("%f",& altura);
    printf("Ingrese la base del Triangulo: \n");
    scanf("%f",& base);
    superficie=(base*altura)/2;
    printf("La superficie es: %f",superficie);
    return;
}