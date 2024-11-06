#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Pode tirar a CNH");
    }
    else {
        printf("Nao pode fazer CNH");
    }
}
