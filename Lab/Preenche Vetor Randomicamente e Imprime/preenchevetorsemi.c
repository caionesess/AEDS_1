#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor (int vetor[], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        *(vetor+i) = rand()%100+1;
    }
}
void imprimirVetor (int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", *(vetor+i));
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
