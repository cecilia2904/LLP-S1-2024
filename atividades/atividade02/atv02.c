#include <stdio.h>

int main() {
    int i;

    printf("Números inteiros pares entre 1 e 50:\n");

    // Loop de 1 a 50
    for (i = 1; i <= 50; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d ", i); // Exibe o número par
        }
    }

    printf("\n");

    return 0;
}
