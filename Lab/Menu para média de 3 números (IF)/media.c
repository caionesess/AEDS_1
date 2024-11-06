#include <stdio.h>
#include <math.h>

int main(){
    int x, y, z;                                        // Define as variaveis inteiras, a opção e a resposta
    char opcao;
    float resposta;

    printf("Escreva tres numeros inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nPrograma para calcular Media");           // Menu para cálculos de média
    printf("\nA) Media Aritmetica");
    printf("\nG) Media Geometrica");
    printf("\nH) Media Harmonica");
    printf("\nP) Media Ponderada");

    printf("\nSelecione a opcao desejada: ");
    scanf(" %c", &opcao);

    if(opcao == 'A'){
        resposta = (x + y + z)/3.0;
        printf("%.2f", resposta);
    }
    else if(opcao == 'G'){
        resposta = cbrt(x * y * z);
        printf("%.2f", resposta);
    }
    else if(opcao == 'H'){
        resposta = 3.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z));
        printf("%.2f", resposta);
    }
    else if(opcao == 'P'){
        resposta = (x + (2.0 * y) + (3.0 * z))/ 6.0;    // Utiliza-se o .0 para converter de int para float
        printf("%.2f", resposta);
    }

}
