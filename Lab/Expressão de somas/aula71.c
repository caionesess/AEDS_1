#include <stdio.h>
int soma (int);
int somaGauss (int);
float expressao (int);

int main(){
    int n;
    float s;
    scanf("%d", &n);
    s = expressao(n);
    printf("%.2f", s);
}

float expressao(int n){
    int num, den;
    num = soma(n);
    den = somaGauss(n);
    return (num * 1.0 / den);
}

int soma(int n){
    int num = 0;
    for (int i = 1; i <= n; i++){
        num = num + i * (n - i + 1);
    }
    return num;
}
int somaGauss (int n){
    int den = 0;
    for(int i = 1; i <= n; i++){
        den = den + i;
    }
    return den;
}
