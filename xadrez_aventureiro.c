#include <stdio.h>

int main() {
    int i, j;

    printf("=== Nível Aventureiro - Movimentando o Cavalo ===\n\n");

    printf("O Cavalo move-se em 'L': 2 casas para baixo e 1 para a esquerda.\n\n");

    for (i = 1; i <= 2; i++) {
        printf("Baixo %d\n", i);
        for (j = 1; j <= 1; j++) {
            printf("Esquerda %d\n", j);
        }
    }

    printf("\nMovimento do Cavalo concluído!\n");
    return 0;
}
