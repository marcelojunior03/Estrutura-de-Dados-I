//Nome: Marcelo Heiffig Júnior - Prontuário: CV3095126

#include <stdio.h>

void main(){
    int caixaSuperRapido[10], caixaRapido[10], caixaNormal[10], produtos, continuar;

    do{
        printf("\nQuantos produtos tem dentro do carrinho?: ");
        scanf("%i", &produtos);

        if(produtos <= 0){
            printf("ERRO! O valor digitado é invalido!");
        }
        else if(produtos <= 5){
            caixaSuperRapido[i] = produtos;
        }
        else if(produtos > 5 && produtos <= 20){
            caixaRapido[i] = produtos;
        }
        else{
            caixaNormal[i] = produtos;
        }

        printf("Deseja continuar? (1 = sim; 0 = nao)\n");
        scanf("%i", &continuar);
    }
    while(continuar == 1);

    printf("\nCaixa super rapido:\n")
    for(int i = 0; i < 10; i++){
        printf(caixaSuperRapido[i]"\n");
    }

    printf("\nCaixa rapido:\n")
    for(int i = 0; i < 10; i++){
        printf(caixaRapido[i]"\n");
    }

    printf("\nCaixa normal:\n")
    for(int i = 0; i < 10; i++){
        printf(caixaNormal[i]"\n");
    }
}
