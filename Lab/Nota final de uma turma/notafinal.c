#include <stdio.h>

int main(){
    float notaf, soma = 0;
    int aluno = 0;

    scanf("%f", &notaf);
    while (notaf >= 0){
        if(notaf >= 60){
            printf("Aluno %d: Aprovado\n", aluno + 1);
        }
        else{
            printf("Aluno %d: Reprovado\n", aluno + 1);
        }
        soma = soma + notaf;
        aluno++;
        scanf("%f", &notaf);
    }
    // se o loop tiver sido executado ao menos uma vez, printa a média, caso contrário, encerra o programa
    aluno > 0 ? printf("Media da turma: %.2f", soma / aluno) : 0;
}
