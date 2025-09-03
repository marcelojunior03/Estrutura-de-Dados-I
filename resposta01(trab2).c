//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#define LIN 4
#define COL 4

void main(){
    int Matriz[LIN][COL];
    int lin, col;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            printf("Digite um número para a linha %i, coluna %i: ", lin++, col++);
            scanf("%i", &Matriz[lin][col]);
        }
    }

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            
        }
    }
}
