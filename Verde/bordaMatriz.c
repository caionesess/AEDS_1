#include <stdio.h>

int bordaMatriz (int nLin, int nCol, int mat[nLin][nCol]){
    int soma = 0;
    for(int i = 0; i < nLin; i++){
        for (int j = 0; j < nCol; j++){
            if(i == 0 || i == nLin - 1){
                soma += mat[i][j];
            }
            else if(j == 0 || j == nCol - 1){
                soma += mat[i][j];
            }
        }
    }
    return soma;
}

void preencherMatriz (int nLin, int nCol, int mat[nLin][nCol]){
	for(int i = 0; i < nLin; i++){
		for (int j = 0; j < nCol; j++){
			scanf("%d", &mat[i][j]);
		}
	}
}

int main(){
    int nLin, nCol;
	scanf("%d %d", &nLin, &nCol);

	int matrizUm[nLin][nCol];
    preencherMatriz(nLin, nCol, matrizUm);

    int soma = bordaMatriz(nLin, nCol, matrizUm);
    printf("%d", soma);
}
