#include <stdio.h>

// aplica um reajuste de 10% em um sal�rio
// % � um marcador da vari�vel ; & � o endere�o da mem�ria

int main () {
    float salario, reajuste, salariofinal;

    printf("Digite o valor do salario: ");
    scanf("%f", & salario);

    reajuste = (salario / 10);
    salariofinal = (salario + reajuste);

    printf("O salario foi de: %f", salario);
    printf("\n O reajuste foi de: %.2f", reajuste); // .2f para ter apenas duas casas decimais
    printf("\n O salario final foi: %.2f", salariofinal);
}
