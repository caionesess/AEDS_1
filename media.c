#include <stdio.h>

int main (){
    int i = 0;
    float n, soma = 0;
    scanf("%f", &n);
    while (n >= 0){
        soma = soma + n;
        i++;
        scanf("%f", &n);
    }
    // se o loop tiver sido executado ao menos uma vez, printa a média, caso contrário, encerra o programa
    i > 0 ? printf("Media das notas: %.2f", soma / i) : 0;
}
