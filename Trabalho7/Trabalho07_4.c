//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

void strmrg(char *s1, char *s2, char *s3){
    char *frase = s3;

    while(*s1 != '\0' || *s2 != '\0'){
        if(*s1 != '\0'){
            *frase = *s1;
            frase++;
            s1++;
        }

        if(*s2 != '\0'){
            *frase = *s2;
            frase++;
            s2++;
        }
    }

    *frase = '\0';

    printf("\nFrase final: %s", s3);
}

void main(){
    char s1[50];
    char s2[50];
    char s3[100];

    printf("\nDigite a primeira frase: ");
    gets(s1);

    printf("\nDigite a segunda frase: ");
    gets(s2);

    strmrg(s1, s2, s3);
}
