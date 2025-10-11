//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 5

void main(){
    struct jogador{
        char nome[20];
        int pontuacao;
    };
    typedef struct jogador Jogador;

    Jogador jogadores[MAX];
    char resultado[MAX][MAX];
    char result;
    int lin, col;
    int contador = 0;
    bool erro;
    int maiorPontuacao = 0;

    for(lin = 0; lin < MAX; lin++){
        do{
            fflush(stdin);
            printf("\nDigite o nome do jogador %i: ", lin+1);
            gets(jogadores[lin].nome);
        }while(strlen(jogadores[lin].nome) < 3);

        jogadores[lin].pontuacao = 0;
    }

    for(lin = 0; lin < MAX-1; lin++){
        printf("\nBaseado em %s: ", jogadores[lin].nome);

        for(col = 0; col < MAX; col++){
            if(lin == col){
                resultado[lin][col] = 'X';
            }
            else if(lin < col){
                erro = true;

                do{
                    fflush(stdin);
                    printf("\nDigite o resultado de %s x %s (V, E ou D): ", jogadores[lin].nome, jogadores[col].nome);
                    result = getchar();
                    result = toupper(result);
                    resultado[lin][col] = result;

                    if(result == 'V'){
                        jogadores[lin].pontuacao += 10;
                        jogadores[col].pontuacao += 1;

                        resultado[col][lin] = 'D';

                        erro = false;
                    }
                    else if(result == 'E'){
                        jogadores[lin].pontuacao += 5;
                        jogadores[col].pontuacao += 5;

                        resultado[col][lin] = 'E';

                        erro = false;
                    }
                    else if(result == 'D'){
                        jogadores[lin].pontuacao += 1;
                        jogadores[col].pontuacao += 10;

                        resultado[col][lin] = 'V';

                        erro = false;
                    }
                    else{
                        printf("\nEntrada invalida!\n");
                    }
                }while(erro != false);
            }
        }
    }

    for(lin = 0; lin < MAX; lin++){
        printf("\n%s: ", jogadores[lin].nome);
        for(col = 0; col < MAX; col++){
            if(lin != col){
                printf("\t%c", resultado[lin][col]);
            }
        }
        printf("\t%2i pontos", jogadores[lin].pontuacao);

        if(lin == 0){
            maiorPontuacao = jogadores[lin].pontuacao;
        }
        else{
            if(jogadores[lin].pontuacao > maiorPontuacao){
                maiorPontuacao = jogadores[lin].pontuacao;
            }
        }
    }

    for(lin = 0; lin < MAX; lin++){
        if(jogadores[lin].pontuacao == maiorPontuacao){
            printf("\nO jogador %s eh o campeao com %2i pontos!!!", jogadores[lin].nome, jogadores[lin].pontuacao);
        }
    }
}
