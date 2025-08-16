#include <stdio.h>

int main(){
    char opcao;
    int torre = 1, bispo = 1;
    
    // Escolha de qual peça movimentar //
    printf("Escolha qual peça movimentar>\n");
    printf("Digite sua respectiva inicial>\n \n");
    printf("T.orre>\n");
    printf("B.ispo>\n");
    printf("R.ainha> ");
    scanf("%c", &opcao);

    // Movimento da peça escolhida //
    switch (opcao)
    {
        case 'T':  
        case 't':
        // Movimento da Torre (while) //
        // Vai rodar enquanto a quantidade de movimento não ser 5 //
            printf("\nA Torre vai andar 5 casas para a direita!\n \n");

            while (torre <= 5)
            {
                printf("Direita\n");
                torre++;
            }
            printf("\n"); // Detalhe estético //
            break;

        case 'B':
        case 'b':
            // Movimento do Bispo (do-while) //
            // Vai rodar enquanto a quantidade de movimento não ser 5 //
            printf("\nO Bispo vai andar 5 casas para a diagonal direita!\n \n");

            do
            {
                printf("Cima, Direita\n");
                bispo++;

            } while (bispo <= 5);
            printf("\n"); // Detalhe estético //
            break;


        case 'R':
        case 'r':
            // Movimento da Rainha (for) //
            // Vai rodar enquanto a quantidade de movimento não ser 8 //
            printf("\nA Rainha vai andar 8 casas para a esquerda!\n \n");

            for(int rainha = 1; rainha <= 8; rainha++)
            {
                printf("Esquerda\n");
            }
            printf("\n"); // Detalhe estético //
            break;

        default:
            printf("\nCaractere Inválido\n \n");
            break;
    }

    return 0;
}