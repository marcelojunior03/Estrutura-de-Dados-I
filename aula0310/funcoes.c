#include <stdio.h>

int somar(int a, int b) //a e b sao parametros no cabecalho
{
    int resultado; //variavel local da funcao somar
    resultado = a + b;
    return resultado; //encerra a funcao e devolve o valor
    printf("\nTerminou a funcao");
}

int main()
{
    int a = 10;
    int b = 20;
    int resultado; //variavel local da funcao main

    resultado = somar(a, b); //a e b sao argumentos para a funcao

    printf(resultado);

    return 1;
}
