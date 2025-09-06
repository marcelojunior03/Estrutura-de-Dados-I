#include <stdio.h>
#include <string.h>

void main(){
    char nome1[100], nome2[100];

    /*printf("\nDigite o nome 1: ");
    gets(nome1);

    for(int i = 0; i < strlen(nome1); i++){
        nome2[i] = nome1[i];
    }

    printf("\nNome 1: %s", nome1);
    printf("\nNome 2: %s", nome2);*/

    printf("\nDigite o nome 1: ");
    gets(nome1);
    printf("\nDigite o nome 2: ");
    gets(nome2);

    strcmp(nome1, nome2);
}
