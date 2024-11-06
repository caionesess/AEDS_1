#include <stdio.h>
#include <math.h>

int main (void) {
    float raio;

    scanf("%f", & raio);

    float area = 3.14159 * pow(raio,2);

    float perimetro = 2 * 3.14159 * raio;

    printf("%.2f %.2f", area, perimetro);
}
