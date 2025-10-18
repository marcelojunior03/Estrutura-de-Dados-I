#include <stdio.h>

int somar(int a, int b){
    return (a + b);
}

void main(){
    int x = 10;
    int y = 5;
    int valor = somar(x, y);
    printf("\n%i somando com %i igual a %i", x, y, valor);
}
