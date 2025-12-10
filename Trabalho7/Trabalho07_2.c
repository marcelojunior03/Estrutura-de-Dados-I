//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

void strcatcat(char *s1, char *s2, char *s3){
    char *frase = s1;

    while(*frase != '\0'){
        frase++;
    }

    while(*s2 != '\0'){
        *frase = *s2;
        frase++;
        s2++;
    }

    while(*s3 != '\0'){
        *frase = *s3;
        frase++;
        s3++;
    }

    *frase = '\0';

    printf("\nFrase final: %s", s1);
}

void main(){
    char s1[100];
    char s2[50];
    char s3[50];

    printf("\nDigite a primeira frase: ");
    gets(s1);

    printf("\nDigite a segunda frase: ");
    gets(s2);

    printf("\nDigite a terceira frase: ");
    gets(s3);

    strcatcat(s1, s2, s3);
}

