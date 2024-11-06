#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *preencherMatriz2 (int nLin, int nCol){
    srand(time(NULL));
    int *mat = (int *)malloc(nLin * nCol * sizeof(int));
    for(int i = 0; i < (nLin * nCol); i++){
        *(mat+i) = rand()%100+1;
    }
    return mat;
}

void imprimirMatriz2(int nLin, int nCol, int *mat) {
    for (int i = 0; i < nLin; i++) {
        for (int j = 0; j < nCol; j++) {
            printf("%d\t", *(mat + i * nCol + j));
        }
        printf("\n");
    }
}

int *somaMatriz (int nLin, int nCol, int *matUm, int *matDois){
    srand(time(NULL));
    int *matSoma = (int *)malloc(nLin * nCol * sizeof(int));
    for(int i = 0; i < (nLin * nCol); i++){
        *(matSoma+i) = *(matUm+i) + *(matDois+i);
    }
    return matSoma;
}

int main(){
	int nLin, nCol;
	printf("Digite o numero de Linhas e de Colunas das matrizes: ");
	scanf("%d %d", &nLin, &nCol);

	int *matUm = preencherMatriz2(nLin, nCol);
	int *matDois = preencherMatriz2(nLin, nCol);
	int *matSoma = somaMatriz(nLin, nCol, matUm, matDois);

	imprimirMatriz2(nLin, nCol, matUm);
	printf("\n\n");
	imprimirMatriz2(nLin, nCol, matDois);
	printf("\n\n");
	imprimirMatriz2(nLin, nCol, matSoma);

	free(matUm);
	free(matDois);
	free(matSoma);
	}
