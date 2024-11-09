#include <stdio.h>
#include <string.h>

int stringMaiorTamanho(char strings[][100], int n) {
    int maior = 0;
    for (int i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(strings[maior])) {
            maior = i;
        }
    }
    return maior;
}

int stringMaiorLexico(char strings[][100], int n) {
    int maiorLex = 0;
    for (int i = 1; i < n; i++) {
        if (strcmp(strings[i], strings[maiorLex]) > 0) {
            maiorLex = i;
        }
    }
    return maiorLex;
}

int main() {
    int n, maiorTam, maiorLex;
    scanf("%d", &n); // número de strings a serem lidas
    getchar();  // Captura o '\n' após a leitura do inteiro
    char strings[n][100]; // cada string tem no máximo 100 caracteres

    for (int i = 0; i < n; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    maiorTam = stringMaiorTamanho(strings, n);
    maiorLex = stringMaiorLexico(strings, n);

    printf("%s\n", strings[maiorTam]);

    if (maiorLex != maiorTam) {
        printf("%s\n", strings[maiorLex]);
    }
}
