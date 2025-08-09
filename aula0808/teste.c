#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float x, y, resultado;
    int continuar = 1;

    while (continuar == 1){
        printf("Digite o valor do dividendo:\n");
        scanf("%f", &x);
        printf("Agora, digite o valor do divisor:\n");
        scanf("%f", &y);

        if(y != 0){
            resultado = x / y;

            printf("O resltado da divisão é %.2f.\n", resultado);
        }
        else{
            printf("O valor do divisor é inválido!\n");
        }

        printf("Se deseja continuar, digite 1. Se deseja finalizar, digite 0:\n");
        scanf("%i", &continuar);
    }

    printf("Muito obrigado!");
}
