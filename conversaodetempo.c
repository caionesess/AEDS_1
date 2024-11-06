#include <stdio.h>
//Conversão de tempo sequencial

int main () {
    int horas, minutos, segundos, entrada;
    //printf(Digite o tempo de execucao em segundos: ");
    scanf("%d", &entrada);

    horas = entrada / 3600;
    minutos = (entrada % 3600) / 60;
    segundos = (entrada % 3600) % 60;

    printf("%02d:%02d:%02d", horas, minutos, segundos);
}

//Conversão de tempo com condicional

//int main () {
//    int tempo;
//    int segundos = 0;
//    int minutos = 0;
//    int horas = 0;
//
//    printf(Digite o tempo de execucao em segundos: ");
//    scanf("%d", &tempo);
//    while(tempo > 59){
//        if(tempo >= 3600){
//            horas++;
//            tempo = tempo - 3600;
//        }
//        else{
//            minutos++;
//            tempo = tempo-60;
//        }
//    }
//    segundos = tempo;
//    printf("Horas: %d", horas);
//    printf("\n Minutos: %d", minutos);
//    printf("\n Segundos: %d", segundos);
//}
