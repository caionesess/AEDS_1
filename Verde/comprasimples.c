#include <stdio.h>

int main () {
    int codigo_um, codigo_dois, quantidade_um, quantidade_dois;
    float preco_um, preco_dois, preco_total;

    //printf("Digite o codigo do produto, quantidade e preco separando-os com espaco: \n");
    scanf("%d %d %f", &codigo_um, &quantidade_um, &preco_um);

    //printf("Digite o codigo do outro produto, quantidade e preco separando-os com espaco: \n");
    scanf("%d %d %f", &codigo_dois, &quantidade_dois, &preco_dois);

    preco_total = (quantidade_um * preco_um) + (quantidade_dois * preco_dois);

    printf("VALOR A PAGAR: R$ %.2f", preco_total);
}
