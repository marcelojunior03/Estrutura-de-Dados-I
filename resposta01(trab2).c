//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#define LIN 4
#define COL 4

void main(){
    int lin, col, linNula, colNula;
    int Matriz[LIN][COL];

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            printf("Digite um numero para a linha %i, coluna %i: ", lin+1, col+1);
            scanf("%i", &Matriz[lin][col]);
        }
    }

    linNula = 0;
    colNula = 0;

    for(lin = 0; lin < LIN; lin++){
        if(Matriz[lin][0] == 0 && Matriz[lin][1] == 0 && Matriz[lin][2] == 0 && Matriz[lin][3] == 0){
            linNula++;
        }

        if(Matriz[0][lin] == 0 && Matriz[1][lin] == 0 && Matriz[2][lin] == 0 && Matriz[3][lin] == 0){
            colNula++;
        }
    }

    printf("A matriz possui %i linhas nulas e %i colunas nulas.", linNula, colNula);
}
