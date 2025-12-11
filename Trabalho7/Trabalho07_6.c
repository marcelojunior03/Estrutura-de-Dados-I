//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>

#define MAX 30

float devolveMedia(float *array, int tamanho){
    float soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += array[i];
    }

    float media = soma/tamanho;
    return media;
}

void main(){
    float array[MAX];
    int tamanho = 0;
    char continua;

    do{
        printf("\nDigite um numero: ");
        scanf("%f", &array[tamanho]);
        tamanho++;

        while(getchar() != '\n');

        printf("\nDeseja continuar?(S/N) ");
        continua = getchar();

        while(getchar() != '\n');

    }while(toupper(continua) == 'S' && tamanho < MAX);

    float media = devolveMedia(array, tamanho);

    printf("\nMedia final: %.2f", media);
}
