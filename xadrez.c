#include <stdio.h>

void movimentoT (int numero){ // Recursividade da Torre //
    if(numero > 0)
    {
        printf("Direita\n");
        movimentoT(numero - 1);
    }
}

// =================================================================

void movimentoBv (int numero){ // Recursividade do Bispo (vertical) //
    if(numero > 0)
    {
        printf("Cima, ");
        movimentoBv(numero - 1);
    }
}

void movimentoBh (int numero){ // Recursividade do Bispo (horizontal) //
    if(numero > 0)
    {
        printf("Direita\n");
        movimentoBh(numero - 1);
    }
}

// ==================================================================

void movimentoR (int numero){ // Recursividade da Rainha //
    if(numero > 0)
    {
        printf("Esquerda\n");
        movimentoR(numero - 1);
    }
}

// ====================================================================

int main(){
    char opcao;
    int torre = 5, bispoV, bispoH, bispoResult;
    int rainha = 8, cavaloV, cavaloH;
    
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
        // Movimento da Torre //
            printf("\nA Torre vai andar 5 casas para a direita!\n");
            movimentoT(torre); // Vai escrever "Direita" 5 vezes

            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;

        case 'B':
        case 'b':
            // Movimento do Bispo //
            // Usa recursividade e loops alinhados //
            printf("\nO Bispo vai andar 5 casas para a diagonal direita!\n");

            for(bispoV = 1; bispoV <= 5; bispoV++) // Vai "loopar" até que o valor do 'BispoV' seja 5
            {
                // Garante que "Cima" seja printado uma vez só a cada loop, ao invés de aumentar
                // a quantidade de prints na mesma linha cada vez que ele reinicia
                bispoResult = (bispoV + 1) - bispoV;
                movimentoBv(bispoResult);                       

                for(bispoH = 1; bispoH <= 1; bispoH++) // Printa "Direita" uma vez até o fim do loop externo
                {
                    movimentoBh(bispoH);
                }
            }

            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;


        case 'R':
        case 'r':
            // Movimento da Rainha (for) //
            printf("\nA Rainha vai andar 8 casas para a esquerda!\n");
            movimentoR(rainha); // Vai escrever "Esquerda" 8 vezes

            printf("\n"); // Detalhe estético //
            printf("O oponente irá se movimentar...\n \n");
            break;

        case 'C':
        case 'c':
            // Movimento do Cavalo //
            // Só usa loops alinhados //
            printf("\nO Cavalo vai andar 2 casas para cima e 1 para a direita!\n");
            for(cavaloH = 1; cavaloH <= 5; cavaloH++) // Vai "loopar" até que o valor do 'CavaloH' seja 5
            {
                for(cavaloV = 1; cavaloV <= 3; cavaloV++) // Vai "loopar" até que o valor do 'CavaloV' seja 3
                {
                    if(cavaloV == 3) // Garante que quando o valor do 'CavaloV' chegar a 3, ele pule esse print
                    {
                        printf("Cima\n");
                        continue;
                    }
                }

                if(cavaloH > 1) // Garante que se o valor de 'CavaloH' passar de 1, ele "quebre" o loop
                {
                    printf("Direita\n");
                    break;
                }
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