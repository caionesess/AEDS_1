#include <stdio.h>

int main(){
    int x, y, maior, soma = 0;

    scanf("%d %d", &x, &y);
    if(x < y){
        maior = y;
        y = x;
        x = maior;
    }
    for(int i = y; i <= x; i++){
        if(i % 13 != 0){
            soma = soma + i;
        }
    }
    printf("%d", soma);
}
