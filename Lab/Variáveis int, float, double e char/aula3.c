#include <stdio.h>

int main (void) {
    int varInt;
    float varFloat;
    double varDouble;
    char varChar;

    printf("Digite um valor inteiro: ");
    scanf("%d", & varInt);

    printf("Digite um caractere: ");
    scanf(" %c", & varChar);

    printf("Digite um ponto flutuante: ");
    scanf("%f", & varFloat);

    printf("Digite um double: ");
    scanf("%lf", & varDouble);

    printf("O valor inteiro: %d\n", varInt);
    printf("O caractere: %c\n", varChar);
    printf("O ponto flutuante: %.2f\n", varFloat);
    printf("O valor double: %.2lf\n", varDouble);
}
