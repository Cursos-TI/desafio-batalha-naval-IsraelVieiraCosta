#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAM 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[TAM][TAM] = {0}; // inicia tudo com 0 (água)
    int cone[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}
    };

    int cone_i = 0; // linha onde a cone começa
    int cone_j = 0; // coluna onde a cone começa

    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int cruz_i = 5; // linha onde a cruz começa
    int cruz_j = 5; // coluna onde a cruz começa

    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro_i = 0; // linha onde a octaedro começa
    int octaedro_j = 5; // coluna onde a octaedro começa

    // imprime o tabuleiro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i >= cone_i && i < cone_i + 5 &&
                j >= cone_j && j < cone_j + 5) {
                // posição dentro do cone → ajusta os índices
                printf("%d ", cone[i - cone_i][j - cone_j]);
            } else if ( i >= cruz_i && i < cruz_i + 5 &&
                        j >= cruz_j && j < cruz_j + 5) {
                    // posição dentro da cruz → ajusta os índices
                    printf("%d ", cruz[i - cruz_i][j - cruz_j]);
            } else if ( i >= octaedro_i && i < octaedro_i + 5 &&
                        j >= octaedro_j && j < octaedro_j + 5) {
                        // posição dentro do octaedro → ajusta os índices
                        printf("%d ", octaedro[i - octaedro_i][j - octaedro_j]);
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
