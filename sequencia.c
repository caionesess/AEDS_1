#include <stdio.h>

int main() {
    int M, N, i, soma;

    scanf("%d %d", &N, &M);
    soma = 0;

    if (N > M) {
        int maior = N;
        N = M;
        M = maior;
    }
    for (i = N; i <= M; i++) {
        printf("%d ", i);
        soma = soma + i;
    }
    printf("Soma = %d", soma);
}
