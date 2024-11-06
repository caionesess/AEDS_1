#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    if(x == 0 || y == 0){
        return 0;
    }
    else if (x > 0 && y > 0){
        printf("primeiro");
    }
    else if (x < 0 && y > 0){
        printf("segundo");
    }
    else if (x < 0 && y < 0){
        printf("terceiro");
    }
    else if (x > 0 && y < 0){
        printf("quarto");
    }
}
