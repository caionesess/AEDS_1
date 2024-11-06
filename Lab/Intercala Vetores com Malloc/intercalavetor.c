#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int vetor[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *(vetor + i) = rand() % 100 + 1;  // Preenche com números aleatórios de 1 a 100
    }
}

void imprimirVetor(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \t", *(vetor + i));
    }
    printf("\n");
}

int *intercalar(int vetor1[], int vetor2[], int tam1, int tam2) {
    int *vetor3 = (int *)malloc((tam1 + tam2) * sizeof(int));
    int j = 0;
    int tamMenor = tam1 < tam2 ? tam1 : tam2;

    for (int i = 0; i < tamMenor; i++) {
        vetor3[j] = vetor1[i];
        j++;
        vetor3[j] = vetor2[i];
        j++;
    }

    // Coloca os numeros faltantes do vetor maior
    if (tam1 > tam2) {
        for (int i = tamMenor; i < tam1; i++) {
            vetor3[j] = vetor1[i];
            j++;
        }
    } else if (tam2 > tam1) {
        for (int i = tamMenor; i < tam2; i++) {
            vetor3[j] = vetor2[i];
            j++;
        }
    }

    return vetor3;
}

int main() {
    int tam1, tam2;
    int *vetor3;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tam1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tam2);

    int vetor1[tam1], vetor2[tam2];

    preencheVetor(vetor1, tam1);
    printf("Vetor 1: ");
    imprimirVetor(vetor1, tam1);

    preencheVetor(vetor2, tam2);
    printf("Vetor 2: ");
    imprimirVetor(vetor2, tam2);

    vetor3 = intercalar(vetor1, vetor2, tam1, tam2);
    printf("Vetor Intercalado: ");
    imprimirVetor(vetor3, (tam1 + tam2));

    free(vetor3);  // Libera a memória alocada dinamicamente
}

