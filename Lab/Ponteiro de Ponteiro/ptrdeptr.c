#include <stdio.h>

int main(){
    int x, *px, **ppx, ***pppx;
    px = &x;
    ppx = &px;
    pppx = &ppx;
    x = 10;

    printf("%d", ***pppx); // print valor de x usando o pppx
}
