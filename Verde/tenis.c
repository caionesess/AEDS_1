#include <stdio.h>

int main()
{
    int vitorias = 0;
    char resultado;

    for (int i = 0; i < 6; i++)
    {
//        printf("Digite o resultado da partida: ");
        scanf(" %c", &resultado);
        if (resultado == 'V')
        {
            vitorias++;
        }
    }

    if (vitorias == 6 || vitorias == 5)
    {
        printf("1");
    }
    else if (vitorias == 4 || vitorias == 3)
    {
        printf("2");
    }
    else if (vitorias == 2 || vitorias == 1)
    {
        printf("3");
    }
    else
    {
        printf("-1");
    }
}
