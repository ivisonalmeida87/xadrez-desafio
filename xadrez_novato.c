#include <stdio.h>

int main() {
    int i;

    printf("=== Nível Novato - Movimentando as Peças do Xadrez ===\n\n");

    // Torre (for)
    printf("Torre se move 5 casas para a direita:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }

    // Bispo (while)
    printf("\nBispo se move 5 casas na diagonal (Cima Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita %d\n", i);
        i++;
    }

    // Rainha (do-while)
    printf("\nRainha se move 8 casas para a esquerda:\n");
    i = 1;
    do {
        printf("Esquerda %d\n", i);
        i++;
    } while (i <= 8);

    printf("\nMovimentação concluída!\n");
    return 0;
}
