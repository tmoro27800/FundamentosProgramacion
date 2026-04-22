/*
Escribir un programa que permita al usuario ingresar los montos de las compras
de un cliente y que al finalizar informe por pantalla el importe total a pagar,
teniendo en cuenta que si éste supera los $1000 se le debe aplicar un 10% de descuento.
Se desconoce la cantidad de datos que se van a ingresar.
La carga de datos finaliza cuando el usuario ingresa el monto 0 (cero).
Se debe validar que no se ingresen montos negativos indicando al usuario monto invalido.
 */

#include <stdio.h>

void main(){
    float monto=1;
    float monto_total=0;
    int descuento=10;
    while (monto!=0){
        printf("Ingresar el monto del producto (0 para salir): ");
        scanf("%f",& monto);
        if(monto!=0){
            monto_total+=monto;
        }
    }
    
    if ( monto_total > 1000 ){
        monto_total= monto_total - ((monto_total/100)*descuento);
    }
    printf("El monto total a pagar es: %f dolares \n", monto_total);
    
    return;
}