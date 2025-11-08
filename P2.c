//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAXCON 25
#define MAXVOO 200

//Item 1
struct controlador{
    char nome[50];
    char telefone[11];
};
typedef struct controlador Controlador;

//Item 2
struct voo{
    char numero[6];
    char companhia[25];
    int quemControla;
};
typedef struct voo Voo;

//Item 3
void addCont(Controlador controladores[MAXCON], int *quantos){
    system("cls");
    char continua;

    do{
        fflush(stdin);
        printf("\nDigite o nome do controlador: ");
        scanf("%c", &controladores[*quantos].nome);

        fflush(stdin);
        printf("\nDigite o telefone do controlador: ");
        scanf("%c", &controladores[*quantos].telefone);

        *quantos = *quantos + 1;

        fflush(stdin);
        printf("\nAdicionar mais um controlador? (S/N) ");
        continua = getchar();
    }
    while(toupper(continua) == 'S' && *quantos < MAXCON);
}

//Item 4
bool veSeExiste(char nome[50], Controlador controladores[MAXCON], int quantos, Voo voos[MAXVOO]){
    bool achou = false;

    for(int i = 0; i < quantos; i++){
        if(strcmp(nome, controladores[i].nome) == 0){
            voos[i].quemControla = i;
            achou = true;
        }
    }
    return achou;
}

void addVoo(Voo voos[MAXVOO], int *quantos, Controlador controladores[MAXCON], int quantosCont){
    system("cls");
    char continua;
    char nome[50];

    if(quantosCont == 0){
        printf("\nNenhum controlador cadastrado!\n\n");
        system("pause");
    }
    else{
        do{
            fflush(stdin);
            printf("\nInforme o numero do voo: ");
            scanf("%c", &voos[*quantos].numero);

            fflush(stdin);
            printf("\nDigite a companhia aerea responsavel: ");
            scanf("%c", &voos[*quantos].companhia);

            do{
                fflush(stdin);
                printf("\nDigite o nome do controlador encarregado: ");
                scanf("%c", &nome);
            }
            while(veSeExiste(nome, controladores, *quantos, voos));

            *quantos = *quantos + 1;

            fflush(stdin);
            printf("\nAdicionar mais um voo? (S/N) ");
            continua = getchar();
        }
        while(toupper(continua) == 'S' && *quantos < MAXVOO);
    }
}

//Item 5
void imprimirRelacao(Voo voos[MAXVOO], int quantos, Controlador controladores[MAXCON]){
    system("cls");
    char continua;

    printf("\n---------Relacao de Voos---------\n");

    for(int i = 0; i < quantos; i++){
        printf("\n%s\t%s\t%s", voos[i].numero, voos[i].companhia, controladores[voos[i].quemControla].nome);
    }

    do{
        fflush(stdin);
        printf("\nVoltar ao menu? (S/N) ");
        continua = getchar();
    }
    while(toupper(continua) != 'S');
}

void main(){
    Controlador controladores[MAXCON];
    int quantosCont = 0;
    Voo voos[MAXVOO];
    int quantosVoos = 0;
    int opcao = 0;

    do{
        system("cls");
        printf("\n------------Sistema de Gerenciamento de Voos------------\n");
        printf("\n1 - Adicionar controlador(es)");
        printf("\n2 - Adicionar voo(s)");
        printf("\n3 - Imprimir relacao de voos");
        printf("\n4 - Sair");

        fflush(stdin);
        printf("\nDigite sua opcao: ");
        scanf("%i", &opcao);

        switch(opcao){
            case 1:{
                addCont(controladores, &quantosCont);
                break;
            }
            case 2:{
                addVoo(voos, &quantosVoos, controladores, quantosCont);
                break;
            }
            case 3:{
                imprimirRelacao(voos, quantosVoos, controladores);
                break;
            }
            case 4:{
                printf("Obrigado!");
                break;
            }
            default:{
                printf("\nOpcao invalida!");
            }
        }
    }
    while(opcao != 4);
}
