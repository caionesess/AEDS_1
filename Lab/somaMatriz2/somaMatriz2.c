#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int nLin, int nCol, int mat[nLin][nCol]){
    for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

void preencherMatriz (int nLin, int nCol, int mat[nLin][nCol]){
	for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol; j++){
			printf("digite o conteudo %d %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	imprimirMatriz(nLin, nCol, mat);
}

void somaMatriz(int nLin, int nCol, int mat[nLin][nCol], int matUm[nLin][nCol], int matDois[nLin][nCol]){
    for(int i= 0; i < nLin; i++){
		for (int j=0; j < nCol; j++){
			mat[i][j] = matUm[i][j] + matDois[i][j];
		}
	}
	imprimirMatriz(nLin, nCol, mat);
}

int main(){
	int nLin, nCol;
	printf("Digite o numero de Linhas e de Colunas: ");
	scanf("%d %d", &nLin, &nCol);

	int matrizUm[nLin][nCol];
	int matrizDois[nLin][nCol];
	int matrizSoma[nLin][nCol];

  	preencherMatriz(nLin, nCol, matrizUm);
  	preencherMatriz(nLin, nCol, matrizDois);
  	printf("\nSoma das Matrizes:\n");
  	somaMatriz(nLin, nCol, matrizSoma, matrizUm, matrizDois);
  	}
