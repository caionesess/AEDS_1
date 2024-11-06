#include <stdio.h>

int main (){
    int M, A, B, C, mais_velho;

//    printf("Digite a idade da Dona Monica: ");
    scanf("%d", &M);

    if(M < 40 || M > 110){
        return 0;
    }

//    printf("Digite a idade de um dos filhos: ");
    scanf("%d", &A);

    if(A < 1 || A >= M){
        return 0;
    }

//    printf("Digite a idade de outro filho: ");
    scanf("%d", &B);

    if(B < 1 || B >= M){
        return 0;
    }
    if(A == B){
        return 0;
    }

    C = M - A - B;

    mais_velho = A;
    if(mais_velho < B){
        mais_velho = B;
    }
    if(mais_velho < C){
        mais_velho = C;
    }

    printf("%d", mais_velho);
}
