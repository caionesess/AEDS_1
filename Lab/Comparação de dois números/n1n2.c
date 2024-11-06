#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        n1 = n1 - 10;
        n2 = n1 + 10;
    }
    printf("O valor de n1 = %d \nO valor de n2 = %d", n1, n2);
}
