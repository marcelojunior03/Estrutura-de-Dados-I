//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

void stup(char *frase){
    int tamanhoString = strlen(frase);

    for(int i = tamanhoString - 1; i >= 0; i--){
        printf("%c", *(frase + i));
    }
}

void main(){
    char frase[100];

    printf("\nDigite uma frase: ");
    gets(frase);

    stup(frase);
}
