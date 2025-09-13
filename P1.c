//Nome: Marcelo Heiffig Júnior - Prontuário: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
    int garcom, mesa;
    float taxaServico, ana, ze, rui, bia, teca, candinho;
    float atendimentos[garcom][mesa], totalConta[garcom][mesa];
    char continuar;

    taxaServico = 0.1;
    atendimentos[garcom][mesa] = totalConta[garcom][mesa] = 0;
    ana = ze = rui = bia = teca = candinho = 0;

    do{
        printf("Qual garcom fara o atendimento (Ana = 0; Ze = 1; Rui = 2; Bia = 3; Teca = 4; Candinho = 5)? ");
        scanf("%i", &garcom);

        printf("Qual mesa sera atendida (1-10)? ");
        scanf("%i", &mesa-1);

        printf("Qual o valor gerado pelo atendimento? ");
        scanf("%f", &atendimentos[garcom][mesa]);

        if(atendimentos[garcom][mesa] > 0){
            totalConta[garcom][mesa] += atendimentos[garcom][mesa];
            if(garcom == 0){
                ana += totalConta[garcom][mesa]/2;
            }
            else if(garcom == 1){
                ze += totalConta[garcom][mesa]/2;
            }
            else if(garcom == 2){
                rui += totalConta[garcom][mesa]/2;
            }
            else if(garcom == 3){
                bia += totalConta[garcom][mesa]/2;
            }
            else if(garcom == 4){
                teca += totalConta[garcom][mesa]/2;
            }
            else if(garcom == 5){
                candinho += totalConta[garcom][mesa]/2;
            }
        }
        else{
            printf("Valor invalido!");
        }

        fflush(stdin);
        printf("\nDeseja continuar os atendimentos?(S/N) ");
        continuar = getchar();
        continuar = toupper(continuar);

    }while(continuar == 'S');

    printf("\nValor total Ana: %.2f\nTaxa de servico: %.2f\n", ana, ana * taxaServico);
    printf("\nValor total Ze: %.2f\nTaxa de servico: %.2f\n", ze, ze * taxaServico);
    printf("\nValor total Rui: %.2f\nTaxa de servico: %.2f\n", rui, rui * taxaServico);
    printf("\nValor total Bia: %.2f\nTaxa de servico: %.2f\n", bia, bia * taxaServico);
    printf("\nValor total Teca: %.2f\nTaxa de servico: %.2f\n", teca, teca * taxaServico);
    printf("\nValor total Candinho: %.2f\nTaxa de servico: %.2f", candinho, candinho * taxaServico);
}
