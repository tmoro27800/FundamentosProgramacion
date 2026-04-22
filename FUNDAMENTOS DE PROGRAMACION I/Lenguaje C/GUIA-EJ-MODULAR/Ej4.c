/*
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool ValidarFecha(int dia,int mes, int anio){
    bool es_valido = false;
    

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 ){
        if (dia > 0 && dia < 32) es_valido = true;
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if (dia > 0 && dia < 31) es_valido = true;
    }
    if (mes == 2){
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)  ){ 
            if (dia > 0 && dia < 30) es_valido = true;
        } else {
            if (dia > 0 && dia < 29) es_valido = true;
        }
    }
    return es_valido;
}

void DescomponerFecha(int fecha,int *dia, int *mes, int *anio){
    *dia = fecha % 100;
    *mes = (fecha / 100) % 100;
    *anio = (fecha / 10000) % 10000;
}

int InputFecha(){
    int fecha;
    printf("Ingresar fecha (AAAA/MM/DD): ");
    scanf("%d",& fecha);
    return fecha;
}

void MensajeUsuario(int d, int m, int a) {
    char *meses[] = {"", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    printf("%d de %s de %d\n", d, meses[m], a);
}

void main(){
    int d,m,a;

    DescomponerFecha(InputFecha(),&d,&m,&a);

    if(ValidarFecha(d,m,a)){
        MensajeUsuario(d,m,a);
    } else {
        printf("Error fecha invalida");
    }

    return;
}