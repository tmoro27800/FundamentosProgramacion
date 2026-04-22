#include <stdio.h>
#define FECHA_ACTUAL 20260420 

int CompararMarca(int marcaActual, int mejorMarcaAnterior){
    if (marcaActual > mejorMarcaAnterior){
        return marcaActual;
    }
    return mejorMarcaAnterior;
}

void IngresoParticipante(int *numero, int *fechaNacimiento, int *mejorMarcaParticipante){
    int num, fecha, marca;
    int mejorDeEsteAtleta = 0;

    printf("\nIngrese su numero de participante: ");
    scanf("%d", &num);
    printf("Ingrese su fecha de nacimiento (AAAAMMDD): ");
    scanf("%d", &fecha);

    for(int i=1; i <= 3; i++){
        printf("Distancia del Salto %d: ", i);
        scanf("%d", &marca);
        mejorDeEsteAtleta = CompararMarca(marca, mejorDeEsteAtleta);
    }
    
    *numero = num;
    *fechaNacimiento = fecha;
    *mejorMarcaParticipante = mejorDeEsteAtleta;
}

int CalcularEdad(int fechaNacimiento){
    int dia_n, mes_n, anio_n, dia_ac, mes_ac, anio_ac;
    dia_n = (fechaNacimiento % 100);
    mes_n = (fechaNacimiento / 100) % 100;
    anio_n = (fechaNacimiento / 10000);
    
    dia_ac = (FECHA_ACTUAL % 100);
    mes_ac = (FECHA_ACTUAL / 100) % 100;
    anio_ac = (FECHA_ACTUAL / 10000);

    if (dia_ac < dia_n) { mes_ac--; }
    if (mes_ac < mes_n) { anio_ac--; }
    
    return anio_ac - anio_n;
}

void Ciclo(){
    int numero, fecha, mejorMarcaPersonal;
    int mejorMarcaGlobal = -1; 
    int numeroMejorAtleta = 0;

    for(int i=1; i <= 5; i++){
        printf("\n--- Participante %d ---", i);
        IngresoParticipante(&numero, &fecha, &mejorMarcaPersonal);
        
        if (mejorMarcaPersonal > mejorMarcaGlobal) {
            mejorMarcaGlobal = mejorMarcaPersonal;
            numeroMejorAtleta = numero;
        }

        printf("RESULTADO: ");
        printf("El participante: %d - edad: %d - obtuvo su mejor marca: %d\n", 
                numero, CalcularEdad(fecha), mejorMarcaPersonal);
    }

    printf("\n=========================================\n");
    printf("EL GANADOR ES EL ATLETA NUMERO: %d con %d metros\n", numeroMejorAtleta, mejorMarcaGlobal);
    printf("=========================================\n");
}

int main(){ // Cambiado a int main por estándar
    Ciclo();
    return 0;
}
