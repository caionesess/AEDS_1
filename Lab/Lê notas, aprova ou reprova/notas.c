#include <stdio.h>

int main(){
    int alunos = 0;
    float notas, soma = 0;

    while(alunos < 5){
        for(int i = 0; i < 4; i++){
            scanf("%f", &notas);
            soma = soma + notas;
        }
        if((soma/4) >= 60){
            printf("Aluno %d: Aprovado com %.2f", alunos + 1, soma / 4);
        }
        else{
            printf("Aluno %d: Reprovado com %.2f", alunos + 1, soma / 4);
        }
        alunos++;
        soma = 0;
    }
}
