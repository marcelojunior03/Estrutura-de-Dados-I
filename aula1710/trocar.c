#include <stdio.h>

void trocarPorValor(int a, int b){
    int troca;
    troca = a;
    a = b;
    b = troca;
}

void trocarPorReferencia(int *a, int *b){
    int troca;
    troca = *a;
    *a = *b;
    *b = troca;
}

void main(){
    int x = 10;
    int y = 5;
    printf("\nAntes: x = %i e y = %i", x, y);

    trocarPorValor(x, y); //mandou cópias (não muda)

    printf("\nDepois: x = %i e y = %i", x, y);

    trocarPorReferencia(&x, &y); //compartilhou os originais (muda)

    printf("\nDepois depois: x = %i e y = %i", x, y);
}
