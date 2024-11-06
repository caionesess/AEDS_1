#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz (int nLin, int nCol, int mat[nLin][nCol]){
	for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol; j++){
			printf("digite o conteudo %d %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimirMatriz(int nLin, int nCol, int mat[nLin][nCol]){
    for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

// Soma elementos acima da diagonal secundária
void somarAcimaDs(int nLin, int nCol, int mat[nLin][nCol]){
    int soma = 0;
    for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol - i - 1; j++){
			soma += mat[i][j];
		}
	}
	printf("Soma: %d", soma);
}

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

int main(){
	int nLin, nCol;
	printf("Digite o numero de Linhas e de Colunas: ");
	scanf("%d %d", &nLin, &nCol);

	int *mat = preencherMatriz2(nLin, nCol);
	imprimirMatriz2(nLin, nCol, mat);

	free(mat);

    int matriz[nLin][nCol];
  	preencherMatriz(nLin, nCol, matriz);
	imprimirMatriz(nLin, nCol, matriz);
	somarAcimaDs(nLin, nCol, matriz);

}
