#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, raiz, x_1, x_2;
    printf("Digite os coeficientes da equacao: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a != 0){
        delta = (pow(b,2)) - (4 * a * c);
        if(delta < 0){
            printf("\n Nao ha raizes reais.");
        }
        else if(delta == 0){
            x_1 = (b * (-1)) / (2 * a);
            printf("\n x = %.2f", x_1);
        }
        else {
            x_1 = ((b * (-1)) + raiz) / (2 * a);
            x_2 = ((b * (-1)) - raiz) / (2 * a);
            printf("\n X' = %.2f e X'' = %.2f", x_1, x_2);
        }
    }
    else {
        printf("\n Nao e possivel calcular pois a = 0");
    }
}
