#include <stdio.h>

// Define o tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10

int main() {
    char linha[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[COLUNAS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Inserir o primeiro navio (horizontal)
    int inicio_linha_navio1 = 4;  // Linha 'E' (índice 4)
    int inicio_coluna_navio1 = 3; // Coluna 4 (índice 3)
    int tamanho_navio1 = 3;

    for (int j = inicio_coluna_navio1; j < inicio_coluna_navio1 + tamanho_navio1; j++) {
        tabuleiro[inicio_linha_navio1][j] = 3; // 3 representa o navio
    }

    // Inserir o segundo navio (vertical)
    int inicio_linha_navio2 = 5;  // Linha 'F' (índice 5)
    int incio_coluna_navio2 = 1;  // Coluna 2 (índice 1)
    int tamanho_navio2 = 3;

    for (int i = inicio_linha_navio2; i < inicio_linha_navio2 + tamanho_navio2; i++) {
        tabuleiro[i][incio_coluna_navio2] = 3; // 3 representa o navio
    }

    // Inserir o terceiro navio (diagonal: A6, B7, C8)
    int inicio_linha_navio3 = 0;  // Linha 'A' (índice 0)
    int inicio_coluna_navio3 = 5; // Coluna 6 (índice 5)
    int tamanho_navio3 = 3;       // Navio ocupa 3 espaços

    for (int k = 0; k < tamanho_navio3; k++) {
        tabuleiro[inicio_linha_navio3 + k][inicio_coluna_navio3 + k] = 3; // 3 representa o navio
    }

    // Inserir o quarto navio (diagonal: F7, G6, H5)
    int inicio_linha_navio4 = 7;
    int inicio_coluna_navio4 = 6;
    int tamanho_navio4 = 3;

    for (int n = 0; n < tamanho_navio4; n++)
    {
        tabuleiro[inicio_linha_navio4 + n][inicio_coluna_navio4 - n] = 3;
    }
    

    // Imprime o tabuleiro
    printf("Tabuleiro\n");
    printf("   ");
    for (int j = 0; j < COLUNAS; j++) {
        printf("%2d ", coluna[j]);
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%c  ", linha[i]);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}