#include <stdio.h>

int main(){
    int dia_ini, horas_ini, minutos_ini, segundos_ini;
    int dia_fim, horas_fim, minutos_fim, segundos_fim;
    int dia, horas, minutos, segundos;

    scanf("%d", &dia_ini);
    scanf("%d %d %d", &horas_ini, &minutos_ini, &segundos_ini);

    scanf("%d", &dia_fim);
    scanf("%d %d %d", &horas_fim, &minutos_fim, &segundos_fim);

    //dias
    dia = dia_fim - dia_ini;

    //horas
    if(horas_fim < horas_ini){
        horas = 24 - (horas_ini - horas_fim);
        dia = dia - 1;
    }
    else if(horas_fim == horas_ini){
        horas = 0;
    }
    else{
        horas = horas_fim - horas_ini;
    }

    //minutos
    if(minutos_fim < minutos_ini){
        minutos = 60 - (minutos_ini - minutos_fim);
    }
    else if(minutos_fim == minutos_ini){
        minutos = 0;
    }
    else{
        minutos = minutos_fim - minutos_ini;
    }

    //segundos
    if(segundos_fim < segundos_ini){
        segundos = 60 - (segundos_ini - segundos_fim);
    }
    else if(segundos_fim == segundos_ini){
        segundos = 0;
    }
    else{
        segundos = segundos_fim - segundos_ini;
    }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
}
