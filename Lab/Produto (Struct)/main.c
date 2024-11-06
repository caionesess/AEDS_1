#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

int main()
{
    int n, vendidos;
    float precoM;
    char prodVenda[100];

    printf("Quantos produtos deseja cadastrar: ");
    scanf("%d", &n);
    Produto produtos[n];

    for(int i = 0; i < n; i++){
        produtos[i] = cadastrarProduto();
    }

    precoM = precoMedio(produtos, n);
    printf("O preco medio e: %.2f\n", precoM);

    printf("Digite o nome do produto vendido: ");
    getchar();
    fgets(prodVenda, sizeof(prodVenda), stdin);

    printf("Digite a quantidade do produto que foi vendida: ");
    scanf("%d", &vendidos);
    registrarVenda(prodVenda, produtos, n, vendidos);
}
