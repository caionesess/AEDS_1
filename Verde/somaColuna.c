#include <stdio.h>

void preencherMatriz (int nLin, int nCol, int mat[nLin][nCol]){
	for(int i = 0; i < nLin; i++){
		for (int j = 0; j < nCol; j++){
			scanf("%d", &mat[i][j]);
		}
	}
}

void somaColuna (int nLin, int nCol, int mat[nLin][nCol]){
    int soma = 0;
    for (int j = 0; j < nCol; j++){
		for(int i = 0; i < nLin; i++){
		    soma += mat[i][j];
		}
		printf("%d ", soma);
		soma = 0;
    }
}


int main(){
    int nLin, nCol;
	scanf("%d %d", &nLin, &nCol);

	int matrizUm[nLin][nCol];
    preencherMatriz(nLin, nCol, matrizUm);

    somaColuna(nLin, nCol, matrizUm);
}
