#include <stdio.h>

// === Funções recursivas ===

// Torre: move horizontal ou vertical
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: move diagonal
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Rainha: move em qualquer direção
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Cima %d\n", i);
        for (int j = 1; j <= 1; j++) {
            printf("Direita %d\n", j);
        }
    }
}

int main() {
    printf("=== Nível Mestre - Movimentos Complexos ===\n\n");

    printf("Torre:\n");
    moverTorre(3);

    printf("\nBispo:\n");
    moverBispo(3);

    printf("\nRainha:\n");
    moverRainha(3);

    moverCavalo();

    printf("\nTodos os movimentos foram executados!\n");
    return 0;
}
