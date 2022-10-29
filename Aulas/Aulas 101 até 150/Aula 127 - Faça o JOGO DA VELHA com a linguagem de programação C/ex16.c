/*
16) Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte
se deseja jogar novamente.
*/

#include <stdio.h>

char mapa[3][3] = {'-','-','-','-','-','-','-','-','-'};

// Função que resistra jogada e mostra mapa
int JogadaMapa(coluna, linha, jogada)
    {
        if(mapa[coluna -1][linha -1] == 'X' || mapa[coluna - 1][linha -1] == 'O')
        {
            printf("Jogada inválida!!!\n\n");
            return 1;
        }
        else
            mapa[coluna -1][linha - 1] = jogada;

        for (int linha = 0; linha < 3; linha++)
        {
            for(int coluna = 0; coluna < 3; coluna++)
            {
                printf("%c ", mapa[linha][coluna]);
            }
            printf("\n");
        }
    return 0;
    }


int verificaVencedor()
    {
    for (int i = 0; i < 3; i ++)
        {
            if (mapa[i][0] == 'X' && mapa[i][1] == 'X' && mapa[i][2] == 'X')
                {
                printf("O jogador X venceu o jogo.\n");
                return 1;
                }
                
            else if (mapa[i][0] == 'O' && mapa[i][1] == 'O' && mapa[i][2] == 'O')
                {
                printf("O jogador O venceu o jogo.\n");
                return 1;
                }

            else if (mapa[0][i] == 'X' && mapa[1][i] == 'X' && mapa[2][i] == 'X')
                {
                printf("O jogador X venceu o jogo.\n");
                return 1;
                }

            else if (mapa[0][i] == 'O' && mapa[1][i] == 'O' && mapa[2][i] == 'O')
                {
                printf("O jogador O venceu o jogo.\n");
                return 1;
                }
        }
    return 1;
    }


int main(){

    int coluna, linha, fimJogo, verificaJogada = 1;

    for (int jogadas = 1; jogadas <= 9; jogadas++){

        if (jogadas > 5)
        {
            fimJogo = verificaVencedor();
            if (fimJogo == 1)
                    break;
        }

        if(jogadas % 2 == 1){
            do {
                printf("Vez do jogador X: \n");
                printf("Digite a linha e a coluna desejada: ");
                scanf("%d %d", &coluna, &linha);
                verificaJogada = JogadaMapa(coluna, linha, 'X');
            } while (verificaJogada == 0);
            }
        
         else{
            printf("Vez do jogador O: \n");
            printf("Digite a linha e a coluna desejada: ");
            scanf("%d %d", &coluna, &linha);
            JogadaMapa(coluna, linha, 'O');
         }
    }

    return 0;
}


/*
-Máximo de jogadas 9 OK
-Verificar se o espaço está ocupado OK
-Verifocar linha OK
-Verificar coluna OK
-Verificar transvesal
-Fazer while até digitar um valor válido 
-Finalizar jogo após um ganhar OK
*/