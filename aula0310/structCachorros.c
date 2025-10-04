#include <stdio.h>
#define MAX 100

int main()
{
    struct cachorro
    {
        char raca[30];
        char porte[40];
        int esperteza;
        char cor[30];
    };

    typedef struct cachorro Cachorro;

    Cachorro matilha[MAX];
    int quantos = 0;
    char opcao;
    do
    {
        system("cls");
        printf("\nCRUD de Cachorros");
        printf("\nI - Incluir");
        printf("\nC - Consultar");
        printf("\nP - imPrimir");
        printf("\nA - Alterar");
        printf("\nD - Deletar");
        printf("\nS - Sair");

        fflush(stdin);
        printf("\nDigite sua opcao: ");
        opcao = getchar();

        switch (toupper(opcao))
        {
        case 'I': ///inclusao
        {
            printf("\nInclusao de Cachorro");
            if(quantos == MAX) //n�o tem mais espa�o
            {
                printf("\nImpossivel inserir. Tah cheio");
            }
            else
            {
                fflush(stdin);
                printf("\nDigite a raca.....: ");
                gets(matilha[quantos].raca);

                fflush(stdin);
                printf("\nDigite o porte....: ");
                gets(matilha[quantos].porte);

                fflush(stdin);
                printf("\nDigite a esperteza: ");
                scanf("%i",&matilha[quantos].esperteza);

                fflush(stdin);
                printf("\nDigite a cor......: ");
                gets(matilha[quantos].cor);

                quantos++;
            }
            break;
        }
        case 'C': ///consulta
        {
            printf("\nConsulta de Cachorro");
            if(quantos == 0)
            {
                printf("\nImpossivel consultar. Cadastro VAZIO.");
            }
            else
            {
                Cachorro cao;
                fflush(stdin);
                printf("\nDigite a raca.....: ");
                gets(cao.raca);
                fflush(stdin);
                printf("\nDigite o porte....: ");
                gets(cao.porte);
                fflush(stdin);
                printf("\nDigite a esperteza: ");
                scanf("%i", &cao.esperteza);
                fflush(stdin);
                printf("\nDigite a cor......: ");
                gets(cao.cor);
                int indice;
                int achou = 0; ///falso que achou
                for(indice = 0; indice < quantos; indice++)
                {
                    if((strcmp(cao.raca, matilha[indice].raca) == 0) &&
                            (strcmp(cao.porte, matilha[indice].porte) == 0) &&
                            (strcmp(cao.cor, matilha[indice].cor) == 0) &&
                            (cao.esperteza == matilha[indice].esperteza))
                    {
                        achou++;
                    }
                }

                if(achou > 0)
                {
                    printf("\nQuantidade encontada: %i caezinhos", achou);
                }
                else
                {
                    printf("\nCachorro NAO encontrado");
                }
            }
            break;
        }
        case 'P':
        {
            if(quantos == 0)
            {
                printf("\nImpossivel imprimir. Lista vazia");
            }
            else
            {
                int indice;
                for(indice = 0; indice < quantos; indice++)
                {
                    printf("\n\nCachorro %i: ", indice);
                    printf("\n\tRaca.....: %s", matilha[indice].raca);
                    printf("\n\tCor......: %s", matilha[indice].cor);
                    printf("\n\tPorte....: %s", matilha[indice].porte);
                    printf("\n\tEsperteza: %i", matilha[indice].esperteza);
                }
            }
            break;
        }
        case 'D': ///deleção
        {
            printf("\nDeletando um cachorro...");
            Cachorro cao;
            fflush(stdin);
            printf("\nDigite a raca.....: ");
            gets(cao.raca);
            fflush(stdin);
            printf("\nDigite o porte....: ");
            gets(cao.porte);
            fflush(stdin);
            printf("\nDigite a esperteza: ");
            scanf("%i", &cao.esperteza);
            fflush(stdin);
            printf("\nDigite a cor......: ");
            gets(cao.cor);

            int indice, i;
            int ondeAchou = -1; ///"fora" do array

            for(indice = 0; indice < quantos && ondeAchou == -1; indice++)
            {
                if((strcmp(cao.raca, matilha[indice].raca) == 0)   &&
                        (strcmp(cao.porte, matilha[indice].porte) == 0) &&
                        (strcmp(cao.cor, matilha[indice].cor) == 0)     &&
                        (cao.esperteza == matilha[indice].esperteza))
                {
                    ondeAchou = indice;
                }
            }
            if(ondeAchou != -1)
            {
                printf("\nCachorro removido da posicao %i da matilha", ondeAchou);
                for(i = ondeAchou; i < quantos; i++)
                {
                    matilha[i] = matilha[i+1];
                }
                quantos--;
            }
            else
            {
                printf("\nERRO. Cachorro nao encontrado para delecao");
            }
            break;
        }
        case 'A': ///alteração
        {
            printf("\nAlterando um cachorro...");
            Cachorro cao;
            fflush(stdin);
            printf("\nDigite a raca.....: ");
            gets(cao.raca);
            fflush(stdin);
            printf("\nDigite o porte....: ");
            gets(cao.porte);
            fflush(stdin);
            printf("\nDigite a esperteza: ");
            scanf("%i", &cao.esperteza);
            fflush(stdin);
            printf("\nDigite a cor......: ");
            gets(cao.cor);

            int indice, i;
            int ondeAchou = -1; ///"fora" do array

            for(indice = 0; indice < quantos && ondeAchou == -1; indice++)
            {
                if((strcmp(cao.raca, matilha[indice].raca) == 0)   &&
                        (strcmp(cao.porte, matilha[indice].porte) == 0) &&
                        (strcmp(cao.cor, matilha[indice].cor) == 0)     &&
                        (cao.esperteza == matilha[indice].esperteza))
                {
                    ondeAchou = indice;
                }
            }
            if(ondeAchou != -1)
            {
                printf("\nCachorro encontrado na posicao %i da matilha", ondeAchou);
                fflush(stdin);
                printf("\nDigite a raca atualizada.....: ");
                gets(matilha[ondeAchou].raca);

                fflush(stdin);
                printf("\nDigite o porte atualizada....: ");
                gets(matilha[ondeAchou].porte);

                fflush(stdin);
                printf("\nDigite a esperteza atualizada: ");
                scanf("%i",&matilha[ondeAchou].esperteza);

                fflush(stdin);
                printf("\nDigite a cor atualizada......: ");
                gets(matilha[ondeAchou].cor);
            }
            else
            {
                printf("\nERRO. Cachorro nao encontrado para alteracao");
            }
            break;
        }
        case 'S': ///sair
        {
            printf("\nAdios....");
            break;
        }
        default:
        {
            printf("\nOpcao invalida");
        }
        }
        printf("\n\n");
        system("pause");
    }
    while(toupper(opcao) != 'S');
}
