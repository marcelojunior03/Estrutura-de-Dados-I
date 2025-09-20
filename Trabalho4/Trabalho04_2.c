//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>

#define ALUNOS 35
#define DISCIPLINAS 6

void main(){
    char alunos[ALUNOS][50];
    char disciplinas[DISCIPLINAS][40] = {"Banco de Dados",
                                         "Estatistica",
                                         "Estrutura de Dados 1",
                                         "Administracao",
                                         "Ling. Programacao 1",
                                         "Sistemas Operacionais"};
    float boletim[ALUNOS+1][DISCIPLINAS+1];
    int linha, coluna;

    for(linha = 0; linha < ALUNOS; linha++){
        fflush(stdin);
        printf("\nDigite o nome do aluno %i: ", linha+1);
        gets(alunos[linha]);
    }

    for(linha = 0; linha < ALUNOS; linha++){
        printf("\nAluno: %s", alunos[linha]);
        for(coluna = 0; coluna < DISCIPLINAS; coluna++){
            printf("\nDigite a nota da disciplina %s: ", disciplinas[coluna]);
            scanf("%f", &boletim[linha][coluna]);
        }
    }
}
