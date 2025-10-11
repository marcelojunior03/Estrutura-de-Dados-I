//Nome: Marcelo Heiffig Júnior - RA: CV3095126

#include <stdio.h>
#include <string.h>

#define MAXFAB 8
#define MAXVEI 15

struct veiculo{
    char modelo[20];
    int cota;
};
typedef struct veiculo Veiculo;

void main(){
    Veiculo veiculos[MAXVEI];
    char fabricas[MAXFAB][10];
    int producao[MAXVEI][MAXFAB];
    int lin, col;

    for(lin = 0; lin < MAXVEI; lin++){
        fflush(stdin);
        printf("\nDigite o modelo do carro %i: ", lin+1);
        gets(veiculos[lin].modelo);

        fflush(stdin);
        printf("\nDigite a cota do carro %s: ", veiculos[lin].modelo);
        gets(veiculos[lin].cota);
    }

    for(lin = 0; lin < MAXFAB; lin++){
        fflush(stdin);
        printf("\nDigite o nome da cidade da fabrica %i: ", lin+1);
        gets(fabricas[lin]);
    }

    for(lin = 0; lin < MAXVEI; lin++){
        printf("\nModelo: %s", veiculos[lin].modelo);
        for(col = 0; col < MAXFAB; col++){
            do{
                fflush(stdin);
                printf("\nDigite a quantidade produzida pela fabrica de %s: ", fabricas[col]);
                scanf("%i", &producao[lin][col]);
            }while(producao[lin][col] < 0);
        }
    }

    for(lin = 0; lin < MAXVEI; lin++){
        for(col = 0; col < MAXFAB; col++){
            printf("\n%s - %s produziu %i unidades", veiculos[lin].modelo, fabricas[col], producao[lin][col]);

            if(producao[lin][col] >= veiculos[lin].cota){
                printf(" e atingiu a meta de %i unidades!", veiculos[lin].cota);
            }
            else{
                printf(" e NAO atingiu a meta de %i, faltando %i unidades!", veiculos[lin].cota, veiculos[lin].cota-producao[lin][col]);
            }
        }
    }
}
