//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
    char alunos[100][50];
    char posicoes[100][20];
    int indice;
    char continuar;

    indice = 0;

    do{
        printf("Digite o nome do aluno: ");
        scanf("%c", &alunos[indice]);

        printf("Digite a posicao do aluno: ");
        scanf("%c", &posicoes[indice]);

        prinft("\nDeseja continuar?(S/N) ");
        continuar = getchar();
        toupper(continuar);

        indice++;

    }while(continuar == 'S');
}