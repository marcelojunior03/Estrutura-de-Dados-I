//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void limpaString(char *s1){

    for(int i = 0; s1[i] != '\0'; i++){
        if(s1[i] == 'ç'){
            s1[i] = 'c';
        }
        else if(s1[i] == 'ã' || s1[i] == 'á'){
            s1[i] = 'a';
        }
        else if(s1[i] == 'é'){
            s1[i] = 'e';
        }
        else if(s1[i] == 'í'){
            s1[i] = 'i';
        }
        else if(s1[i] == 'õ' || s1[i] == 'ó'){
            s1[i] = 'o';
        }
        else if(s1[i] == 'ú'){
            s1[i] = 'u';
        }
    }

    printf("\nFrase reformulada: %s", s1);
}

void main(){
    char s1[50];

    printf("\nDigite uma frase: ");
    gets(s1);

    for(int i = 0; s1[i] != '\0'; i++){
        s1[i] = tolower(s1[i]);
    }

    limpaString(s1);
}
