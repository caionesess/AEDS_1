#include <stdio.h>

int main () {

    int inteiro;
    float ponto_flutuante;

    //printf("Digite um numero inteiro e um ponto flutuante: ");
    scanf("%d %f", &inteiro, &ponto_flutuante);

    printf("Decimal: %05d \n", inteiro);
    printf("Hexadecimal: %X \n", inteiro);
    printf("Octal: %o \n", inteiro);
    printf("Char: %c \n", inteiro);

    printf("Com 6 casas decimais: %.6f \n", ponto_flutuante);
    printf("Com 2 casas decimais: %.2f \n", ponto_flutuante);
    printf("Nota��o cient�fica (lower): %e \n", ponto_flutuante);
    printf("Nota��o cient�fica (upper): %E \n", ponto_flutuante);
}
