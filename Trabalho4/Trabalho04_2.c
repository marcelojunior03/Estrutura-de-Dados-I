//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

#define ALUNOS 3
#define DISCIPLINAS 2

void main(){
    char alunos[ALUNOS][50];
    char disciplinas[DISCIPLINAS][40];
    float boletim[ALUNOS+1][DISCIPLINAS+1];
    float somaDisciplina, somaAluno, mediaDisciplina, mediaAluno;
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
            fflush(stdin);
            printf("\nDigite a nota da disciplina %s: ", disciplinas[col]);
            scanf("%f", &boletim[lin][col]);
        }
    }

    for(col = 0; col < DISCIPLINAS; col++){
        somaDisciplina = 0;
        mediaDisciplina = 0;
        for(lin = 0; lin < ALUNOS; lin++){
            somaDisciplina += boletim[lin][col];
        }
        mediaDisciplina = somaDisciplina/ALUNOS;
        boletim[ALUNOS+1][col] = mediaDisciplina;
    }

    for(lin = 0; lin < ALUNOS; lin++){
        somaAluno = 0;
        mediaAluno = 0;
        for(col = 0; col < DISCIPLINAS; col++){
            somaAluno += boletim[lin][col];
        }
        mediaAluno = somaAluno/DISCIPLINAS;
        boletim[lin][DISCIPLINAS+1] = mediaAluno;
    }

    printf("\nRelatorio final:\n");

    for(lin = 0; lin < ALUNOS; lin++){
        printf("\nAluno: %s", alunos[lin]);
        for(col = 0; col < DISCIPLINAS; col++){
            printf("\nNota de %s: %.2f", disciplinas[col], boletim[lin][col]);
        }
    }

    printf("\n-----Medias das disciplinas:-----\n");

    for(lin = 0; lin < DISCIPLINAS; lin++){
        printf("\nMedia de %s: %.2f", disciplinas[lin], boletim[ALUNOS+1][lin]);
    }

    printf("\n-----Medias dos alunos:-----\n");

    for(lin = 0; lin < ALUNOS; lin++){
        printf("\nMedia do(a) aluno(a) %s: %.2f", alunos[lin], boletim[lin][DISCIPLINAS+1]);
    }

}
