//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXALU 3000
#define QUEST 20

struct aluno{
    char nome[40];
    char respostas[QUEST];
    short int acertos;
};
typedef struct aluno Aluno;

void cadastrarGabarito(char gabarito[QUEST]){
    system("cls");
    int reps = 0;
    char alternativa;

    do{
        fflush(stdin);
        printf("\nQuestao %i (A-E): ", reps + 1);
        scanf(" %c", &alternativa);
        alternativa = toupper(alternativa);

        if(alternativa >= 'A' && alternativa <= 'E'){
            gabarito[reps] = alternativa;
            reps = reps + 1;
        }
        else{
            printf("\nAlternativa invalida!");
        }
    }
    while(reps < QUEST);

    printf("\nGabarito cadastrado com sucesso!");
}

void cadastrarAlunos(Aluno alunos[MAXALU], int *quantos, char gabarito[QUEST]){
    system("cls");
    int i = 0;
    char alternativa;
    char continua;

    if(gabarito[0] == '\0'){
        printf("\nO gabarito ainda nao foi cadastrado!");
    }
    else{
        do{
            fflush(stdin);
            printf("\nDigite o nome do aluno: ");
            gets(alunos[*quantos].nome);

            do{
                printf("\nQuestao %i (A-E): ", i + 1);
                scanf(" %c", &alternativa);
                alternativa = toupper(alternativa);

                if(alternativa >= 'A' && alternativa <= 'E'){
                    alunos[*quantos].respostas[i] = alternativa;
                    i = i + 1;
                }
                else{
                    printf("\nResposta invalida!");
                }
            }
            while(i < QUEST);

            alunos[*quantos].acertos = 0;
            *quantos = *quantos + 1;

            fflush(stdin);
            printf("\nCadastrar mais um aluno? (S/N) ");
            continua = getchar();
        }
        while(toupper(continua) == 'S' && *quantos < MAXALU);
    }
}

void corrigirProvas(Aluno alunos[MAXALU], int quantos, char gabarito[QUEST]){
    system("cls");
    short int ac = 0;

    for(int i = 0; i < quantos; i++){
        for(int j = 0; j < QUEST; j++){
            if (alunos[i].respostas[j] == gabarito[j]) {
                ac = ac + 1;
            }
            j = j + 1;
        }

        alunos[i].acertos = ac;
        i = i + 1;
    }

    printf("\nProvas corrigidas com sucesso!");
}

void imprimirRelatorio(Aluno alunos[MAXALU], int quantos){
    system("cls");
    int i = 0;

    printf("\nRelatorio Geral:");

    do{
        printf("\n%s - Acertos: %d\n", alunos[i].nome, alunos[i].acertos);
        i = i + 1;
    }
    while(i < quantos);
}

void imprimirRanking(Aluno alunos[MAXALU], int quantos){
    system("cls");
    int i = 0;
    short maior = -1;

    do{
        if (alunos[i].acertos > maior){
            maior = alunos[i].acertos;
        }
        i = i + 1;
    }
    while(i < quantos);

    printf("\nMaior numero de acertos: %d", maior);
    printf("\nAluno(s):\n");

    i = 0;

    do{
        if(alunos[i].acertos == maior){
            printf("%s\n", alunos[i].nome);
        }
        i = i + 1;
    }
    while(i < quantos);
}

void main(){
    Aluno alunos[MAXALU];
    int quantosAlunos = 0;
    char gabarito[QUEST] = {'\0'};
    int opcao = 0;

    do{
        system("cls");
        printf("\nSistema de Correcao");
        printf("\n1 - Cadastro de alunos e respostas");
        printf("\n2 - Cadastro de gabarito");
        printf("\n3 - Correcao da prova");
        printf("\n4 - Imprimir relatorio geral");
        printf("\n5 - Imprimir ranking de acertos");
        printf("\n6 - Sair");

        fflush(stdin);
        printf("\nDigite sua opcao: ");
        scanf("%i", &opcao);

        switch(opcao){
            case 1:{
                cadastrarAlunos(alunos, &quantosAlunos, gabarito);
                break;
            }
            case 2:{
                cadastrarGabarito(gabarito);
                break;
            }
            case 3:{
                corrigirProvas(alunos, quantosAlunos, gabarito);
                break;
            }
            case 4:{
                imprimirRelatorio(alunos, quantosAlunos);
                break;
            }
            case 5:{
                imprimirRanking(alunos, quantosAlunos);
                break;
            }
            case 6:{
                printf("Obrigado!");
                break;
            }
            default:{
                printf("\nOpcao invalida!");
            }
        }
    }
    while(opcao != 6);
}
