#include <stdio.h>
int soma (int);
int somaGauss (int, int);
float expressao (int);

int main(){
    int n;
    float s;
    scanf("%d", &n);
    s = expressao(n);
    printf("%.2f", s);
}

float expressao(int n){
    int num, den = 0;
    num = soma(n);
    den = somaGauss(n, den);
    return (num * 1.0 / den);
}

int soma(int n){
    int num = 0;
    for (int i = 1; i <= n; i++){
        num = num + i * (n - i + 1);
    }
    return num;
}
int somaGauss (int n, int den){
    if(n == 0){
        return den;
    }
    return somaGauss(n - 1, den + n);
}
