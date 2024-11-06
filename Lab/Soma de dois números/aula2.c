#include <stdio.h>

//soma de dois numeros

int main (){
    int numero_1, numero_2, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%i",& numero_1);

    printf("Digite outro numero inteiro: ");
    scanf("%i",& numero_2);

    resultado = numero_1 + numero_2;
    printf("Valor da soma dos numeros %i e %i = %i", numero_1, numero_2, resultado);

}
