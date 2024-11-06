#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contaChar(char *string, char caractere){
    int cont = 0, ocorrencia = 0;
    while (string[cont] != '\0'){
        if (toupper(string[cont]) == toupper(caractere)){
            ocorrencia++;
        }
        string++;
    }
    return ocorrencia;
}

int contaChar2(char *string, char caractere){
    int ocorrencia = 0;

    if ((*string) != '\0'){
        return 0;
    }

    ocorrencia = (toupper(*string) == toupper(caractere)) ? 1 : 0;

    return ocorrencia + contaChar2(string + 1, caractere);
}

int main(void){
    char string[100];
    char caractere;

    printf("Digite a string que deseja analisar: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite o caractere que deseja analisar: ");
    scanf(" %c", &caractere);

    int ocorrencia = contaChar(string, caractere);
    printf("%c aparece %d vez(es)", caractere, ocorrencia);

    int ocorrencia2 = contaChar2(string, caractere);
    printf("\n%c aparece %d vez(es)", caractere, ocorrencia2);
}
