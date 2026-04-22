#include <stdio.h>

void main(){

    float temp,c,f;
    char unidad;

    printf("Ingrese la temperatura: ");
    scanf("%f",& temp);

    printf("Ingrese la unidad de la temperatura (F o C): ");
    scanf("%s",& unidad);

    if (unidad == 'F') {
        f=temp;
        c= 5.0/9.0*(f-32);    
    } else {
        
        if (unidad == 'C') {
            f= (c*1.8)+32;
        } else{
            printf("ERROR, al ingresar una unidad valida\n");
        }
        
    }
    if (unidad == 'C' || unidad == 'F'){
        printf("\nFahreinheit: %f",f);
        printf("\nCelcius: %f",c);
        printf("\n");
    } else {
        printf("No se pudo calcular");
        printf("\n");
    }

    return;
}