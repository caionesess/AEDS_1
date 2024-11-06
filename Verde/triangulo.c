#include <stdio.h>

int main(){
    int lado_um, lado_dois, lado_tres;

//    printf("Digite a medida dos 3 lados do triângulo: ");
    scanf("%d %d %d", &lado_um, &lado_dois, &lado_tres);

    if((lado_um + lado_dois > lado_tres) && (lado_dois + lado_tres > lado_um) && (lado_tres + lado_um > lado_dois)){
        if((lado_um == lado_dois) && (lado_dois == lado_tres)){
            printf("Triangulo equilatero");
        }
        else if((lado_um == lado_dois) || (lado_dois == lado_tres) || (lado_um == lado_tres)){
            printf("Triangulo isosceles");
        }
        else{
            printf("Triangulo escaleno");
        }
    }
    else {
        printf("Triangulo invalido");
    }
}
