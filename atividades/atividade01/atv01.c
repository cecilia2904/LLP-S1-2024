#include <stdio.h>

int main() {
    int pontuacao;

    // Solicita a pontuação ao usuário
    printf("Digite sua pontuação no jogo de sinuca (0 a 100): ");
    scanf("%d", &pontuacao);

    // Verifica a pontuação e imprime o resultado correspondente
    if (pontuacao >= 0 && pontuacao < 10) {
        printf("Pontuacao: Insuficiente\n");
    } else if (pontuacao >= 10 && pontuacao < 40) {
        printf("Pontuacao: Regular\n");
    } else if (pontuacao >= 40 && pontuacao < 70) {
        printf("Pontuacao: Bom\n");
    } else if (pontuacao >= 70 && pontuacao < 90) {
        printf("Pontuacao: Otimo\n");
    } else if (pontuacao >= 90 && pontuacao <= 100) {
        printf("Pontuacao: Excelente\n");
    } else {
        printf("Pontuacao invalida! .\n");
    }

    return 0;
}
