//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upts(char *frase){
    int i;
    for(i = 0; *(frase + i) != '\0'; i++){
        if((tolower(*(frase + i)) == 'a') ||
           (tolower(*(frase + i)) == 'e') ||
           (tolower(*(frase + i)) == 'i') ||
           (tolower(*(frase + i)) == 'o') ||
           (tolower(*(frase + i)) == 'u')){
            printf("%c", *(frase + i));
        }
    }

    for(i = 0; *(frase + i) != '\0'; i++){
        if((tolower(*(frase + i)) != 'a') &&
           (tolower(*(frase + i)) != 'e') &&
           (tolower(*(frase + i)) != 'i') &&
           (tolower(*(frase + i)) != 'o') &&
           (tolower(*(frase + i)) != 'u') &&
           (tolower(*(frase + i)) > 'a') &&
           (tolower(*(frase + i)) <= 'z')){
            printf("%c", *(frase + i));
        }
    }
}

void main(){
    char frase[100];

    printf("\nDigite uma frase: ");
    gets(frase);

    upts(frase);
}
