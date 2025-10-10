//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void main(){
    struct jogador{
        char nome[50];
        int pontuacao;
    };
    typedef struct jogador Jogador;

    Jogador jogadores[5];
    char resultado[5][5];
    char result;
    int lin, col;
    int contador = 0;
    bool erro;

    for(lin = 0; lin < 5; lin++){
        fflush(stdin);
        printf("\nDigite o nome do jogador %i: ", lin+1);
        gets(jogadores[lin].nome);

        jogadores[lin].pontuacao = 0;
    }

    for(lin = 0; lin < 5; lin++){
        for(col = 0; col < 5; col++){
            if(lin == col){
                resultado[lin][col] = 'X';
            }
            else{
                erro = true;

                do{
                    fflush(stdin);
                    printf("\nDigite o resultado de %s x %s (V, E ou D): ", jogadores[lin].nome, jogadores[col].nome);
                    result = getchar();
                    result = toupper(result);
                    resultado[lin][col] = result;

                    if(resultado[lin][col] == 'V'){
                        jogadores[lin].pontuacao += 10;
                        erro = false;
                    }
                    else if(resultado[lin][col] == 'E'){
                        jogadores[lin].pontuacao += 5;
                        erro = false;
                    }
                    else if(resultado[lin][col] == 'D'){
                        jogadores[lin].pontuacao += 1;
                        erro = false;
                    }
                    else{
                        printf("\nEntrada inválida!");
                    }
                }while(erro != false);
            }
        }
    }

    for(lin = 0; lin < 5; lin++){
        for(col = 0; col < 5; col++){
            
        }
    }
}
