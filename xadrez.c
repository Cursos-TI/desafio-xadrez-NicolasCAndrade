#include <stdio.h>

// 1. Definição de constantes para facilitar a manutenibilidade
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

int main() {
    // Apresentação do desafio
    printf("--- Desafio de Xadrez - MateCheck: Nível Novato ---\n\n");
    
    // --- 2. Movimentação do Bispo (usando loop for) ---
    printf("--- Movimentação do Bispo ---\n");
    printf("O Bispo se move %d casas na diagonal superior direita.\n", MOVIMENTOS_BISPO);
    
    // O loop 'for' é ideal quando o número de iterações é conhecido.
    // Ele simula os 5 movimentos do bispo.
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        // A regra diz para usar "Cima" e "Direita" para a diagonal
        printf("Cima, Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para melhor formatação

    // --- 3. Movimentação da Torre (usando loop while) ---
    printf("--- Movimentação da Torre ---\n");
    printf("A Torre se move %d casas para a direita.\n", MOVIMENTOS_TORRE);

    // O loop 'while' é usado para repetir um bloco de código
    // enquanto uma condição é verdadeira.
    int contador_torre = 0;
    while (contador_torre < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        contador_torre++; // Incrementa o contador para evitar um loop infinito
    }
    printf("\n");

    // --- 4. Movimentação da Rainha (usando loop do-while) ---
    printf("--- Movimentação da Rainha ---\n");
    printf("A Rainha se move %d casas para a esquerda.\n", MOVIMENTOS_RAINHA);
    
    // O loop 'do-while' executa o bloco de código pelo menos uma vez
    // antes de verificar a condição.
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    
    printf("\n--- Desafio Nível Novato Concluído! ---\n");

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}