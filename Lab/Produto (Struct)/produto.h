#include <stdio.h>
#include <string.h>

typedef struct produto{
    int id;
    char nome[100];
    float preco;
    int qtde;
}Produto;

Produto cadastrarProduto(){
    Produto prod;
    printf("Digite o Id: ");
    scanf("%d", &prod.id);
    getchar();

    printf("Digite o nome: ");
    fgets(prod.nome, sizeof(prod.nome), stdin);

    printf("Digite o preco: ");
    scanf("%f", &prod.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &prod.qtde);

    return prod;
}

float precoMedio(Produto p[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += p[i].preco;
    }
    return soma/n;
}

void registrarVenda (char *prodVenda, Produto *produtos, int n, int vendidos){
    for(int i = 0; i < n; i++){
        if(strcmp(produtos[i].nome, prodVenda)== 0){
                if((produtos[i].qtde - vendidos) >= 0){
                    produtos[i].qtde -= vendidos;
                    printf("Venda registrada! Quantidade restante: %d\n", produtos[i].qtde);
                    return;
                }
                else{
                    printf("Nao ha mais unidades deste produto no estoque!");
                }
        }
        else{
            printf("Este produto não foi cadastrado!");
        }
    }
}
