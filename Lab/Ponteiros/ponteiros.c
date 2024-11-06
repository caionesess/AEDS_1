#include <stdio.h>

int main(){
    int x,y;
    int *px = &x;
    int *py = &y;

    printf("Digite o valor de x: ");
    scanf("%d", px); // ou &x
    printf("\nDigite o valor de y: ");
    scanf("%d", py); // ou &y

    px = py;
    *py = (*px)*(*py);
    *px = *px + 2;

    printf("\nConteudo de px: %p; Endereco de px: %p", px, &px);
    printf("\nConteudo de py: %p; Endereco de py: %p", py, &py);
    printf("\nConteudo de x: %d; Endereco de x: %p", x, &x);
    printf("\nConteudo de y: %d; Endereco de y: %p", y, &y);
}
