#include <stdio.h>

// 1. Definição de constantes para facilitar a manutenibilidade
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

// Novas constantes para o Nível Aventureiro
#define MOVIMENTOS_CAVALO_L 2 // Número de casas na linha do 'L'
#define MOVIMENTOS_CAVALO_VERTICAL 1 // Número de casas na outra linha do 'L'

int main() {
    // Apresentação do desafio
    printf("--- Desafio de Xadrez - MateCheck: Nível Novato & Aventureiro ---\n\n");
    
    // --- Movimentação do Bispo (usando loop for) ---
    printf("--- Movimentação do Bispo ---\n");
    printf("O Bispo se move %d casas na diagonal superior direita.\n", MOVIMENTOS_BISPO);
    
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    // --- Movimentação da Torre (usando loop while) ---
    printf("--- Movimentação da Torre ---\n");
    printf("A Torre se move %d casas para a direita.\n", MOVIMENTOS_TORRE);

    int contador_torre = 0;
    while (contador_torre < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // --- Movimentação da Rainha (usando loop do-while) ---
    printf("--- Movimentação da Rainha ---\n");
    printf("A Rainha se move %d casas para a esquerda.\n", MOVIMENTOS_RAINHA);
    
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    
    printf("\n");

    // --- 2. Movimentação do Cavalo (Nível Aventureiro) ---
    printf("--- Movimentação do Cavalo (Nível Aventureiro) ---\n");
    printf("O Cavalo se move em L, 2 casas para baixo e 1 para a esquerda.\n");

    // Loop externo: movimenta o cavalo "2 casas para baixo"
    // Usamos um for para este primeiro segmento do 'L'
    for (int i = 0; i < MOVIMENTOS_CAVALO_L; i++) {
        printf("Baixo\n");
    }

    // Loop interno: movimenta o cavalo "1 casa para a esquerda"
    // Aninhamos um while para o segundo segmento do 'L'
    int contador_cavalo_horizontal = 0;
    while (contador_cavalo_horizontal < MOVIMENTOS_CAVALO_VERTICAL) {
        printf("Esquerda\n");
        contador_cavalo_horizontal++;
    }

    printf("\n--- Desafio Nível Aventureiro Concluído! ---\n");

    return 0;
}