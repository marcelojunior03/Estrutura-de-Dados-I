//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>

#define MAX 30

int devolveMaior(int *array, int tamanho){
    int maior = 0;

    for(int i = 0; i < tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
        }
    }

    return maior;
}

void main(){
    int array[MAX];
    int tamanho = 0;
    char continua;

    do{
        printf("\nDigite um numero: ");
        scanf("%i", &array[tamanho]);
        tamanho++;

        while(getchar() != '\n');

        printf("\nDeseja continuar?(S/N) ");
        continua = getchar();

        while(getchar() != '\n');

    }while(toupper(continua) == 'S' && tamanho < MAX);

    int maior = devolveMaior(array, tamanho);

    printf("\nMaior numero: %i", maior);
}
