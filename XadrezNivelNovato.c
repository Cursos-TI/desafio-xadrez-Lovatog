#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação de Movimento da Torre (usando for) ---
    // A Torre se move 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5; // Número de casas que a torre vai se mover
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação de Movimento do Bispo (usando while) ---
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5; // Número de casas que o bispo vai se mover
    int contadorBispo = 0; // Contador para controlar o loop while
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n");
    // --- Simulação de Movimento da Rainha (usando do-while) ---
    // A Rainha se move 8 casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8; // Número de casas que a rainha vai se mover
    int contadorRainha = 0; // Contador para controlar o loop do-while
    // O loop do-while executa pelo menos uma vez antes de verificar a condição
    if (casasRainha > 0) { // Garante que o loop execute se houver casas para mover
        do {
            printf("Esquerda\n"); // Imprime a direção a cada casa percorrida
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    } else {
        printf("A Rainha nao se moveu (0 casas).\n");
    }
    printf("\n");

    return 0;
}
