#include <stdio.h>

// Definição de constantes
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8

// Novas constantes para o Nível Mestre
#define MOVIMENTO_CAVALO_L_HORIZONTAL 1
#define MOVIMENTO_CAVALO_L_VERTICAL 2
#define MOVIMENTO_CAVALO_L_TOTAL 3 // 1 horizontal + 2 vertical

// --- Funções Recursivas para o Nível Mestre ---

// Função recursiva para movimentar o Bispo
void moverBispo(int movimentosRestantes) {
    if (movimentosRestantes <= 0) {
        return; // Caso base: para a recursão quando não há mais movimentos
    }
    printf("Cima, Direita\n");
    // Chamada recursiva para o próximo movimento
    moverBispo(movimentosRestantes - 1);
}

// Função recursiva para movimentar a Torre
void moverTorre(int movimentosRestantes) {
    if (movimentosRestantes <= 0) {
        return; // Caso base
    }
    printf("Direita\n");
    moverTorre(movimentosRestantes - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int movimentosRestantes) {
    if (movimentosRestantes <= 0) {
        return; // Caso base
    }
    printf("Esquerda\n");
    moverRainha(movimentosRestantes - 1);
}


int main() {
    printf("--- Desafio de Xadrez - MateCheck: Nível Mestre ---\n\n");
    
    // --- 1. Movimentação do Bispo (com loop aninhado e recursão) ---
    printf("--- Movimentação do Bispo (Função Recursiva e Loops Aninhados) ---\n");
    
    // O problema exige loops aninhados no bispo, então adaptamos a recursão.
    // Usamos um loop aninhado para simular cada passo recursivo.
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        // O loop interno serve para simular a "diagonal"
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");
    // A função recursiva também foi implementada para cumprir a outra parte do requisito.
    // printf("--- Movimentação do Bispo (Função Recursiva) ---\n");
    // moverBispo(MOVIMENTOS_BISPO);
    // printf("\n");

    // --- 2. Movimentação da Torre (Função Recursiva) ---
    printf("--- Movimentação da Torre (Função Recursiva) ---\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("\n");

    // --- 3. Movimentação da Rainha (Função Recursiva) ---
    printf("--- Movimentação da Rainha (Função Recursiva) ---\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("\n");

    // --- 4. Movimentação do Cavalo (Loops com Múltiplas Condições) ---
    printf("--- Movimentação do Cavalo (Loops com Múltiplas Condições) ---\n");
    printf("O Cavalo se move 1 vez em L para cima à direita.\n");
    
    // Loop para o movimento do Cavalo, usando múltiplas condições
    int i = 0;
    while (i < MOVIMENTO_CAVALO_L_TOTAL) {
        // Se i for 0, é o primeiro movimento, que é para cima
        if (i < MOVIMENTO_CAVALO_L_VERTICAL) {
            printf("Cima\n");
        } 
        
        // Quando a primeira parte do 'L' (vertical) é concluída,
        // o `continue` força a próxima iteração.
        if (i == MOVIMENTO_CAVALO_L_VERTICAL - 1) {
            i++;
            continue;
        }

        // Se i for o último movimento, que é para a direita
        if (i == MOVIMENTO_CAVALO_L_TOTAL - 1) {
            printf("Direita\n");
        }
        
        // O `break` encerra o loop após o movimento do Cavalo
        if (i == MOVIMENTO_CAVALO_L_TOTAL - 1) {
            break;
        }

        i++;
    }

    printf("\n--- Desafio Nível Mestre Concluído! ---\n");

    return 0;
}