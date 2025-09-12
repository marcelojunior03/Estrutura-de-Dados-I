//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void main(){
    char alunos[100][50], lista1[100][50], lista2[100][50], lista3[100][50], lista4[100][50], lista5[100][50];
    char posicoes[100][20];
    int indice, indice1, indice2, indice3, indice4, indice5;
    char continuar;
    bool deuErro = false;

    indice1 = indice2 = indice3 = indice4 = indice5 = 0;
    indice = 0;

    do{
        printf("Digite o nome do aluno: ");
        gets(alunos[indice]);

        printf("Digite a posicao do aluno: ");
        gets(posicoes[indice]);

        if(strcasecmp(posicoes[indice], "Goleiro") == 0){
            strcpy(lista1[indice1], alunos[indice]);
            indice1++;
        }
        else if(strcasecmp(posicoes[indice], "Lateral") == 0){
            strcpy(lista2[indice2], alunos[indice]);
            indice2++;
        }
        else if(strcasecmp(posicoes[indice], "Zagueiro") == 0){
            strcpy(lista3[indice3], alunos[indice]);
            indice3++;
        }
        else if(strcasecmp(posicoes[indice], "Meio campo") == 0){
            strcpy(lista4[indice4], alunos[indice]);
            indice4++;
        }
        else if(strcasecmp(posicoes[indice], "Atacante") == 0){
            strcpy(lista5[indice5], alunos[indice]);
            indice5++;
        }
        else{
            printf("ERRO! Posicao invalida!");
            deuErro = true;
        }

        printf("\nDeseja continuar?(S/N) ");
        continuar = getchar();
        continuar = toupper(continuar);

        if(deuErro == false){
            indice++;
        }

        fflush(stdin);

    }while(continuar == 'S');

    printf("\nLista goleiros:\n");
    for(int i = 0; i < indice1; i++){
        printf("%s\n", lista1[i]);
    }

    printf("\nLista laterais:\n");
    for(int i = 0; i < indice2; i++){
        printf("%s\n", lista2[i]);
    }

    printf("\nLista zagueiros:\n");
    for(int i = 0; i < indice3; i++){
        printf("%s\n", lista3[i]);
    }

    printf("\nLista meio campo:\n");
    for(int i = 0; i < indice4; i++){
        printf("%s\n", lista4[i]);
    }

    printf("\nLista atacantes:\n");
    for(int i = 0; i < indice5; i++){
        printf("%s\n", lista5[i]);
    }
}
