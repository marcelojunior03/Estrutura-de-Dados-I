//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

#define JOGADORES 35
#define CRITERIOS 5
#define CAMPEONATOS 2

void main(){
    char jogadores[JOGADORES][50];
    char criterios[CRITERIOS][60] = {"Gols Marcados", "Passes Certos", "Passes Errados", "Desarmes", "Assistencias"};
    int desempenho[JOGADORES][CRITERIOS][CAMPEONATOS];
    char campeonatos[2][100] = {"Campeonato Brasileiro", "Copa do Brasil"};
    int jog, cri, cam;

    for(jog = 0; jog < JOGADORES; jog++){
        printf("Digite o nome do jogador %i: ", jog+1);
        gets(jogadores[jog]);
        fflush(stdin);
    }

    for(cam = 0; cam < CAMPEONATOS; cam++){
        printf("\nCampeonato - %s", campeonatos[cam]);
        for(jog = 0; jog < JOGADORES; jog++){
            printf("\nJogador - %s", jogadores[jog]);
            for(cri = 0; cri < CRITERIOS; cri++){
                printf("\nCriterio - %s: ", criterios[cri]);
                scanf("%i", desempenho[jog][cri][cam]);
                fflush(stdin);
            }
        }
    }

    printf("\nRelatorio final:");

    for(cam = 0; cam < CAMPEONATOS; cam++){
        printf("\nCampeonato - %s", campeonatos[cam]);
        for(jog = 0; jog < JOGADORES; jog++){
            printf("\nJogador - %s", jogadores[jog]);
            for(cri = 0; cri < CRITERIOS; cri++){
                printf("\nCriterio - %s: ", criterios[cri]);
                printf("\nDesempenho: %i", desempenho[jog][cri][cam]);
            }
        }
    }

}
