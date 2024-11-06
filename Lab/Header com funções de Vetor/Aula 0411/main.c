#include <stdio.h>
#include "myHeader.h" // Está restrito a esse projeto
                      // por isso inclui-se com aspas duplas
int main()
{
    //----------------------------------------------------------//

    //Teste função Soma
    int resultado = soma(3, 5);
    printf("Resultado da soma: %d", resultado);

    //----------------------------------------------------------//

    //Teste função Multiplica
    resultado = multiplica(3, 5);
    printf("\nResultado da multiplicacao: %d", resultado);

    //----------------------------------------------------------//

    int n;
    printf("\nDefina o tamanho do vetor: ");
    scanf("%d", &n);

    //----------------------------------------------------------//

    //Teste funções preencheVetor e imprimirVetor
    int vetor[n];
    preencheVetor(vetor, n);
    imprimirVetor(vetor, n);
    printf("\n");

    //----------------------------------------------------------//

    //Teste função somaVetor
    int soma = somaVetor(vetor, n);
    printf("soma = %d", soma);

    //----------------------------------------------------------//

    //Teste função maiorElemento
    int maior = maiorElemento(vetor, n);
    printf("\nmaior elemento = %d", maior);
    printf("\n");

    //----------------------------------------------------------//

    ////Teste função preencherVetor2
    int *vetor2 = preencherVetor2(n);
    imprimirVetor(vetor2, n);
}
