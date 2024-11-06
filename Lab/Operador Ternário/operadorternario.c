#include <stdio.h>

int main(){
    float nota;

    printf("Digite a nota final de um aluno: ");
    scanf("%f", &nota);

    nota = nota >= 60 ? 100 : 0;        // Operador Ternário (?:)
    printf("%.2f", nota);
}
