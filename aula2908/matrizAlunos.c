#include <stdio.h>
#define LIN 100
#define COL 10

void main(){
    char matriz[LIN][COL], gabarito[COL];
    int resultado[LIN], contador, lin, col;

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            do{
                fflush(stdin);
                printf("\nAluno %i: questao %i: ", lin+1, col+1);
                scanf("%c", &matriz[lin][col]);
            }
            while(matriz[lin][col] != 'a' &&
                  matriz[lin][col] != 'b' &&
                  matriz[lin][col] != 'c' &&
                  matriz[lin][col] != 'd');
        }
    }

    for(col = 0; col < COL; col++){
        do{
            fflush(stdin);
            printf("\nDigite a resposta correta da questao %i: ", col+1);
            scanf("%c", &gabarito[col]);
            gabarito[col] = tolower(gabarito[col]);
        }
        while(gabarito[col] < 'a' || gabarito[col] > 'd');
    }

    for(lin = 0; lin < LIN; lin++){
        for(col = 0; col < COL; col++){
            if(matriz[lin][col] == gabarito[col]){
                resultado[lin]++;
            }
        }
    }

    for(lin = 0; lin < LIN; lin++){
        printf("\nO aluno %i teve %i acertos.", lin+1, resultado[lin]);
    }
}
