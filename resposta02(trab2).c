//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#define LIN 3
#define COL 3

void main(){
    int Matriz[LIN][COL];
    int lin, col;
    int lin1, lin2, lin3, col1, col2, col3, diagPrin, diagSec;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            printf("Digite um numero para a linha %i, coluna %i: ", lin+1, col+1);
            scanf("%i", &Matriz[lin][col]);
        }
    }

    lin1 = lin2 = lin3 = col1 = col2 = col3 = diagPrin = diagSec = 0;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            lin1 += Matriz[0][col];
            lin2 += Matriz[1][col];
            lin3 += Matriz[2][col];
            col1 += Matriz[lin][0];
            col2 += Matriz[lin][1];
            col3 += Matriz[lin][2];

            if(lin == col){
                diagPrin += Matriz[lin][col];
            }
        }
    }

    diagSec += Matriz[0][2];
    diagSec += Matriz[1][1];
    diagSec += Matriz[2][0];

    if(lin1 == lin2 == lin3 == col1 == col2 == col3 == diagPrin == diagSec){
        printf("A matriz eh um quadrado magico!");
    }
    else{
        printf("A matriz nao eh um quadrado magico!");
    }
}
