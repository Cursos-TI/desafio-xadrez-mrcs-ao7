#include <stdio.h>

int main(){
    char opcao;
    int torre = 1, bispo = 1, rainha;
    int cavaloM1 = 1, cavaloM2;
    
    // Escolha de qual peça movimentar //
    printf("Escolha qual peça movimentar nessa rodada>\n");
    printf("Digite sua respectiva inicial>\n \n");
    printf("T.orre>\n");
    printf("B.ispo>\n");
    printf("R.ainha>\n");
    printf("C.avalo> ");
    scanf("%c", &opcao);

    // Movimento da peça escolhida //
    switch (opcao)
    {
        case 'T':  
        case 't':
        // Movimento da Torre (while) //
        // Vai rodar enquanto a quantidade de movimento não ser 5 //
            printf("\nA Torre vai andar 5 casas para a direita!\n");

            while (torre <= 5)
            {
                printf("Direita\n");
                torre++;
            }
            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;

        case 'B':
        case 'b':
            // Movimento do Bispo (do-while) //
            // Vai rodar enquanto a quantidade de movimento não ser 5 //
            printf("\nO Bispo vai andar 5 casas para a diagonal direita!\n");

            do
            {
                printf("Cima, Direita\n");
                bispo++;

            } while (bispo <= 5);
            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;


        case 'R':
        case 'r':
            // Movimento da Rainha (for) //
            // Vai rodar enquanto a quantidade de movimento não ser 8 //
            printf("\nA Rainha vai andar 8 casas para a esquerda!\n");

            for(rainha = 1; rainha <= 8; rainha++)
            {
                printf("Esquerda\n");
            }
            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n"); 
            break;

        case 'C':
        case 'c':
            // Movimento do Cavalo (for/while) //
            printf("\nO Cavalo vai andar 2 casas para baixo e 1 para a esquerda!\n");
            for(cavaloM2 = 1; cavaloM2 <= 1; cavaloM2++) // Só irá rodar quando o código interno finalizar //
            {
                while(cavaloM1 <= 2) // Vai rodar enquanto o movimento para baixo não sair duas vezes //
                {
                    printf("Baixo\n");
                    cavaloM1++;
                }

                printf("Esquerda\n");
            }
            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;

        default:
            printf("\nCaractere Inválido\n \n");
            break;
    }

    return 0;
}