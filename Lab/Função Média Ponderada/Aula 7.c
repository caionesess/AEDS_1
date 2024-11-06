#include <stdio.h>

float somatorio (int);

int main(){
    int n;
    float s;
    scanf("%d", &n);
    s = somatorio(n);
    printf("%.2f", s);
}

float somatorio (int n){
    int num = 0, den = 0;
    float resultado;

    for (int i = 1, j = n; i <= n; i++, j--){
        num = (num + (i * j));
        den = den + i;
    }
    resultado = (num * 1.0 / den);
    return resultado;
}
