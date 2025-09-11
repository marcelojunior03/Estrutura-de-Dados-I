//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
    char alunos[100][50], lista1[100][50], lista2[100][50], lista3[100][50], lista4[100][50], lista5[100][50];
    char posicoes[100][20];
    int indice, indice1, indice2, indice3, indice4, indice5;
    char continuar;

    indice1 = indice2 = indice3 = indice4 = indice5 = 0;
    indice = 0;

    do{
        printf("Digite o nome do aluno: ");
        gets(alunos[indice]);

        printf("Digite a posicao do aluno: ");
        gets(posicoes[indice]);

        if(strcmp(posicoes[indice], 'goleiro') == 0){
            lista1[indice1] = alunos[indice];
            indice1++;
        }
        else if(strcmp(posicoes[indice], 'lateral') == 0){
            lista2[indice2] = alunos[indice];
            indice2++;
        }
        else if(strcmp(posicoes[indice], 'zagueiro') == 0){
            lista3[indice3] = alunos[indice];
            indice3++;
        }
        else if(strcmp(posicoes[indice], 'meio campo') == 0){
            lista4[indice4] = alunos[indice];
            indice4++;
        }
        else if(strcmp(posicoes[indice], 'atacante') == 0){
            lista5[indice5] = alunos[indice];
            indice5++;
        }

        printf("\nDeseja continuar?(S/N) ");
        continuar = getchar();
        continuar = toupper(continuar);

        indice++;
        fflush(stdin);

    }while(continuar == 'S');

    printf("Lista goleiros:\n");
    for(int i = 0; i <= indice1; i++){
        printf("\n%s", lista1[i]);
    }

    printf("Lista laterais:\n");
    for(int i = 0; i <= indice2; i++){
        printf("\n%s", lista2[i]);
    }

    printf("Lista zagueiros:\n");
    for(int i = 0; i <= indice3; i++){
        printf("\n%s", lista3[i]);
    }

    printf("Lista meio campo:\n");
    for(int i = 0; i <= indice4; i++){
        printf("\n%s", lista4[i]);
    }

    printf("Lista atacantes:\n");
    for(int i = 0; i <= indice5; i++){
        printf("\n%s", lista5[i]);
    }
}
