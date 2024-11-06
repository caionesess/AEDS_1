#include <stdio.h>

void preencheVetor (int vetor[], int n){
    for(int i = 0; i < n; i++){
        printf("Digite o elemento do vetor: ");
        scanf("%d", &vetor[i]);
    }
}
void imprimirVetor (int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", vetor[i]);
    }
}
int main(){
    int n;
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    preencheVetor(vetor, n);
    imprimirVetor(vetor, n);
}
