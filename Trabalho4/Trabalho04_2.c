//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

#define ALUNOS 35
#define DISCIPLINAS 6

void main(){
    char alunos[ALUNOS][50];
    char disciplinas[DISCIPLINAS][40];
    float boletim[ALUNOS+1][DISCIPLINAS+1];
    int lin, col;

    for(lin = 0; lin < ALUNOS; lin++){
        fflush(stdin);
        printf("\nDigite o nome do aluno %i: ", lin+1);
        gets(alunos[lin]);
    }
    
    for(lin = 0; lin < DISCIPLINAS; lin++){
        fflush(stdin);
        printf("\nDigite o nome da disciplina %i: ", lin+1);
        gets(disciplinas[lin]);
    }

    for(lin = 0; lin < ALUNOS; lin++){
        printf("\nAluno: %s", alunos[lin]);
        for(col = 0; col < DISCIPLINAS; col++){
            printf("\nDigite a nota da disciplina %s: ", disciplinas[col]);
            scanf("%f", &boletim[lin][col]);
        }
    }
    
    
}
