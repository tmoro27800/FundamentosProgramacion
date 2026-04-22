/*
 * 
 */

#include <stdio.h>
#include <stdbool.h>

bool es_multiplo (int num, int divisor){
    return num % divisor==0;
}

int solicitar_usuario(){
    int n;
    printf("Ingrese un numero:");
    scanf("%d",&n);
    return n;
}

void mostrar_mensaje(int c1,int c2,int c3,int c4){
    printf("\nCANTIDADES DE MULTIPLOS\n");
    printf("Multiplos de 2: %d\nMultiplos de 3: %d\nMultiplos de 5: %d\nMultiplos de 7: %d\n",c1,c2,c3,c4);
}


void main(){
    int cont_2=0, cont_3=0, cont_5=0, cont_7=0;
    int cant_pedidos;
    int input_usuario;
    printf("Ingrese cuantos datos vas a ingresar: ");
    scanf("%d",&cant_pedidos);

    for (int i=1; i<=cant_pedidos; i++ ){
        input_usuario=solicitar_usuario();
        if(es_multiplo(input_usuario,2)){
            cont_2++;
        }
        if(es_multiplo(input_usuario,3)){
            cont_3++;
        }
        if (es_multiplo(input_usuario,5)){
            cont_5++;
        }
        if (es_multiplo(input_usuario,7)){
            cont_7++;
        }
    }
    mostrar_mensaje(cont_2,cont_3,cont_5,cont_7);

    return;
}