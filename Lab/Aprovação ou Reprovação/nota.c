#include <stdio.h>

int main(){
    float nota;
    float frequencia;

    printf("Digite a sua nota final: ");
    scanf("%f", &nota);
    printf("Digite a sua frequencia: ");
    scanf("%f", &frequencia);

    if(nota >= 60 && frequencia >= 75){
        printf("APROVADO");
    }
    else{
        printf("REPROVADO");
    }
}
