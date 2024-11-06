#include <stdio.h>

int main (){
    int num_1, num_2, num_3;

//    printf("Digite 3 inteiros: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

        // Testa o inteiro 1
    if (((num_1 % 3) == 0) && ((num_1 % 5)== 0)){
        printf("Divisivel por ambos");
    }
    else if((num_1 % 3) == 0){
        printf("Divisivel por 3");
    }
    else if ((num_1 % 5)== 0){
        printf("Divisivel por 5");
    }
    else {
        printf("Nao e divisivel por 3 nem por 5");
    }

        // Testa o inteiro 2
    if (((num_2 % 3) == 0) && ((num_2 % 5)== 0)){
        printf("\nDivisivel por ambos");
    }
    else if((num_2 % 3) == 0){
        printf("\nDivisivel por 3");
    }
    else if ((num_2 % 5)== 0){
        printf("\nDivisivel por 5");
    }
    else {
        printf("\nNao e divisivel por 3 nem por 5");
    }

        //Testa o inteiro 3
    if (((num_3 % 3) == 0) && ((num_3 % 5)== 0)){
        printf("\nDivisivel por ambos");
    }
    else if((num_3 % 3) == 0){
        printf("\nDivisivel por 3");
    }
    else if ((num_3 % 5)== 0){
        printf("\nDivisivel por 5");
    }
    else {
        printf("\nNao e divisivel por 3 nem por 5");
    }
}
