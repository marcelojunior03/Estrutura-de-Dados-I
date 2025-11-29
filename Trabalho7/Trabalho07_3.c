//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upts(char *frase, char *outra){
    int i;
    int j = 0;
    for(i = 0; *(frase + i) != '\0'; i++){
        if((tolower(*(frase + i)) == 'a') ||
           (tolower(*(frase + i)) == 'e') ||
           (tolower(*(frase + i)) == 'i') ||
           (tolower(*(frase + i)) == 'o') ||
           (tolower(*(frase + i)) == 'u')){
            *(outra+j) = *(frase+i);
            j++;
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
            *(outra+j) = *(frase+i);
            j++;
        }
    }

    *(outra+j) = '\0';
}

void main(){
    char frase[100] = {"Oi Tudo bem?"};
    char outraFrase[100];

    upts(frase, outraFrase);

    puts(outraFrase);
}
