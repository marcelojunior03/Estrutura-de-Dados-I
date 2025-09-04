//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#define LIN 4
#define COL 4

void main(){
    int Matriz[LIN][COL];
    int lin, col, linNula, colNula;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            printf("Digite um numero para a linha %i, coluna %i: ", lin+1, col+1);
            scanf("%i", &Matriz[lin][col]);
        }
    }

    linNula = 0;
    colNula = 0;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            if(Matriz[0][col]){
                linNula++;
            }
            else if(Matriz[1][col]){
                linNula++;
            }
            else if(Matriz[2][col]){
                linNula++;
            }
            else if(Matriz[3][col]){
                linNula++;
            }

            if(Matriz[lin][0]){
                colNula++;
            }
            else if(Matriz[lin][1]){
                colNula++;
            }
            else if(Matriz[lin][2]){
                colNula++;
            }
            else if(Matriz[lin][3]){
                colNula++;
            }
        }
    }

    printf("A matriz possui %i linhas nulas e %i colunas nulas.", linNula, colNula);
}
