#include <stdio.h>

int fat (int);
float soma (int);

void main(){
    int n;
    scanf("%d", &n);
    float resultado = soma(n);
    printf("%.2f", resultado);
}

float soma (int n){
    float aux = 1.0;
    for(int i = 1; i <= n; i++){
        aux = aux + (1.0 / fat(i));
    }
    return aux;
}
int fat (int n){
    if (n == 0) {
        return 1;
    }
    int temp = n;
    for(int i = n - 1; i > 0; i--){
        temp = temp * i;
    }
    return temp;
}








