//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>

#define JOGADORES 35
#define CRITERIOS 5
#define CAMPEONATOS 2

void main(){
    char jogadores[JOGADORES][50];
    char criterios[CRITERIOS][60];
    int desempenho[JOGADORES][CRITERIOS][CAMPEONATOS];

    char nomes[2][100] = {"Campeonato Brasileiro", "Copa do Brasil"};
    int jog, cri, cam;

    for(cam = 0; cam < CAMPEONATOS; cam++){
        printf("\nCampeonato: %s", nomes[cam]);
        for(jog = 0; jog < JOGADORES; jog++){
            printf("\nJogador: %s", jogadores[jog]);
            for(cri = 0; cri < CRITERIOS; cri++){
                printf("\nCriterio: %s", criterios[cri]);
                scanf("%i", desempenho[jog][cri][cam]);
            }
        }
    }
}
