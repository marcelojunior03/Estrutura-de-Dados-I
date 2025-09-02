//Nome: Marcelo Heiffig Júnior - Prontuário: CV3095126

#include <stdio.h>

void main(){
    float valorBruto[30], valorB, valorLiquido[30], valorL, acrescimo;
    int vagasNaGaragem[30], vagas;

    printf("Informe o valor bruto do condominio:\nR$");
    scanf("%f", &valorB);
    for(int i = 0; i < 30; i++){
        valorBruto[i] = valorB;
    }

    for(int i = 0; i < 30; i++){
        printf("\nInforme o numero de vagas ocupadas pelo apartamento %i: ", i+1);
        scanf("%i", &vagas);
        if(vagas >= 0){
            vagasNaGaragem[i] = vagas;
        }
        else{
            printf("ERRO! O numero digitado é invalido!");
        }
    }

    for(int i = 0; i < 30; i++){
        if(vagasNaGaragem[i] == 0 || vagasNaGaragem[i] == 1){
            valorLiquido[i] = valorBruto[i];
        }
        else if(vagasNaGaragem[i] == 2 || vagasNaGaragem[i] == 3){
            acrescimo = valorBruto[i] * 0.1;
            valorL = valorBruto[i] + acrescimo;
            valorLiquido[i] = valorL;
        }
        else{
            acrescimo = valorBruto[i] * 0.2;
            valorL = valorBruto[i] + acrescimo;
            valorLiquido[i] = valorL;
        }
    }

    for(int i = 0; i < 30; i++){
        printf("\nApartamento %i:\nValor bruto: R$%.2f\nVagas: %i\nValor liquido: R$%.2f", i+1, valorBruto[i], vagasNaGaragem[i], valorLiquido[i]);
    }
}
