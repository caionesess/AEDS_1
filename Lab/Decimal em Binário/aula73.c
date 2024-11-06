#include <stdio.h>

void binario(int);

int main(){
    int i, bin;
    scanf("%d", &i);
    binario(i);
}

void binario (int i){
    if (i > 1){
        binario(i / 2);
    }
    printf("%d", i % 2);
}
