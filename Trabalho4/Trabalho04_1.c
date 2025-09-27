//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define tamanhoMAX 20

void main(){
    char senha[tamanhoMAX];
    int indice;
    int contMai, contMin, contNum, contEsp;
    bool sucesso;

    sucesso = false;

    contMai = contMin = contNum = contEsp = 0;

    do{
        printf("\nInforme sua senha: ");
        gets(senha);

        for(indice = 0; indice < tamanhoMAX; indice++){
            if(senha[indice] >= 'A' && senha[indice] <= 'Z'){
                contMai++;
            }
            else if(senha[indice] >= 'a' && senha[indice] <= 'z'){
                contMin++;
            }
            else if(senha[indice] >= '0' && senha[indice] <= '9'){
                contNum++;
            }
            else if(senha[indice] == '(' || senha[indice] == ')' || senha[indice] == '*' || senha[indice] == '+' ||
                    senha[indice] == '-' || senha[indice] == ',' || senha[indice] == '.' || senha[indice] == '/'){
                contEsp++;
            }
        }

        if(strlen(senha) < 10){
            printf("\nA senha precisa ter no minimo 10 caracteres!");
        }

        if(contMai < 2){
            printf("\nA senha precisa ter no minimo 2 letras maiusculas!");
        }

        if(contMin < 3){
            printf("\nA senha precisa ter no minimo 3 letras minusculas!");
        }

        if(contNum < 3){
            printf("\nA senha precisa ter no minimo 3 numeros!");
        }

        if(contEsp < 2){
            printf("\nA senha precisa ter no minimo 2 caracteres especiais!");
        }
        else{
            sucesso = true;
        }

    }while(sucesso == false);

    printf("Senha cadastrada com sucesso!");

}
