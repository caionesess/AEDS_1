#include <stdio.h>

int main(){

    printf("A) ");
    for (int i = 1; i <= 10; i++){
        printf("%d ", i);
    }

    printf("\nB) ");
    for (int i = 1; i <= 10; i = i + 2){
        printf("%d ", i);
    }

    printf("\nC) ");
    for (int i = 1; i <= 10; i = i + 3){
        printf("%d ", i);
    }

    printf("\nD) ");
    for (int i = 10; i <= 50; i = i + 10){
        printf("%d ", i);
    }

    printf("\nE) ");
    for (int i = 10; i >= 1; i--){
        printf("%d ", i);
    }

    printf("\nF) ");
    for (int i = 10; i >= 1; i = i - 2){
        printf("%d ", i);
    }

    printf("\nG) ");
    for (int i = 1; i <= 32; i = i * 2){
        printf("%d ", i);
    }

    printf("\nH) ");
    for (int i = 32; i >= 1; i = i / 2){
        printf("%d ", i);
    }
}
