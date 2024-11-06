#include <stdio.h>
#include <time.h>

int soma (int x, int y){
    return x + y;
}

int multiplica (int x, int y){
    return x * y;
}

void preencheVetor (int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("Digite o elemento do vetor: ");
        scanf("%d", &vetor[i]);
    }
}

int *preencherVetor2(int n){
    srand(time(NULL));
    int *vetor = (int *)malloc(n* sizeof(int));
    for(int i = 0; i < n; i++){
        *(vetor+i) = rand()%100+1;
    }
    return vetor;
}

void imprimirVetor (int *vetor, int n){
    for(int i = 0; i < n; i++){
        printf("%d \t", vetor[i]);
    }
}

int somaVetor (int *vetor, int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += vetor[i];
    }
    return soma;
}

int maiorElemento (int *vetor, int n){
    int maior = -1;
    for(int i = 0; i < n; i++){
        if (vetor[i] > maior || maior == -1){
            maior = vetor[i];
        }
    }
    return maior;
}
