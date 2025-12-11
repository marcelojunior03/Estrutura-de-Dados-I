//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void removeLetra(char *s1, char letra){
    int i, j;

    for(i = 0, j = 0; s1[i] != '\0'; i++){
        if(s1[i] != toupper(letra) && s1[i] != tolower(letra)){
            s1[j] = s1[i];
            j++;
        }
    }

    s1[j] = '\0';

    printf("\nFrase final: %s", s1);
}

void main(){
    char s1[100];
    char letra;

    printf("\nDigite uma frase: ");
    gets(s1);

    printf("\nQual letra gostaria de remover dessa frase? ");
    letra = getchar();

    removeLetra(s1, letra);
}
