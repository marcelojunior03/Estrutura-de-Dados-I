#include <stdio.h>
#define MAX 10

void main(){
    int filaSuper[MAX], filaRapida[MAX], filaComum[MAX];
    int contaSuper, contaRapida, contaComum;
    int produtos, indice;
    char continua;

    contaSuper, contaRapida, contaComum = 0;

    do{
        do{
            printf("Digite a quantidade de produtos: ");
            scanf("%i", &produtos);
            if(produtos <= 0){
                printf("\nValor invalido!");
            }
        }while(produtos <= 0);

        if(produtos <= 5){
            if(contaSuper == MAX){
                printf("Fila cheia!");
            }
            else{
                filaSuper[contaSuper++] = produtos;
            }
        }
        else{
            if(produtos <= 20){
                if(contaRapida == MAX){
                    printf("Fila cheia!");
                }
                else{
                    filaRapida[contaRapida++] = produtos;
                }
            }
            else{
                if(contaComum == MAX){
                    printf("Fila cheia!");
                }
                else{
                    filaComum[contaComum++] = produtos;
                }
            }
        }

        fflush(stdin);
        printf("\nContinua? (S/N)\n");
        continua = toupper(getchar());
    }while(continua == 'S');

    printf("Fila super rapida: ");
    for(indice = 0; indice < contaSuper; indice++){
        printf("\n%io. carrinho tem %i produtos.", indice+1, filaSuper[indice]);
    }
    printf("\nFila rapida: ");
    for(indice = 0; indice < contaRapida; indice++){
        printf("\n%io. carrinho tem %i produtos.", indice+1, filaRapida[indice]);
    }
    printf("\nFila comum: ");
    for(indice = 0; indice < contaComum; indice++){
        printf("\n%io. carrinho tem %i produtos.", indice+1, filaComum[indice]);
    }
}
