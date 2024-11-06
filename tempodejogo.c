#include <stdio.h>

int main(){
    int inicio, fim, horas;
    scanf("%d %d", &inicio, &fim);

    if(inicio > 23 || fim > 23){
        return 0;
    }
    else if(inicio == fim){
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else if (inicio < fim){
        horas = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)", horas);
    }
    else{
        horas = 24 - inicio + fim;
        printf("O JOGO DUROU %d HORA(S)", horas);
    }
}
