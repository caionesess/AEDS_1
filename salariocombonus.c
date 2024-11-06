#include <stdio.h>

int main () {
    char nome[25];
    double salario_fixo, vendas, salario_total;

    //printf("Digite o nome do vendedor: ");
    scanf("%s", &nome);

    //printf("Digite o valor do salario fixo: R$ ");
    scanf("%lf", &salario_fixo);

    //printf("Digite o valor das vendas: R$ ");
    scanf("%lf", &vendas);

    salario_total = salario_fixo + (vendas * 0.15);

    printf("TOTAL = R$ %.2f", salario_total);
}
