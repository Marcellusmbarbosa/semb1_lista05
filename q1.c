#include <stdio.h>
#include <math.h>

// Função para calcular a distância euclidiana entre dois pontos
float distancia(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1, y1, x2, y2;

    // Solicita os valores dos pontos P1 (é preciso digitar espaço e não , entre as coordenadas x e y)
    printf("Digite as coordenadas do ponto P1 (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    // Solicita os valores dos pontos P2
    printf("Digite as coordenadas do ponto P2 (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Calcula a distância e imprime o resultado
    float dist = distancia(x1, y1, x2, y2);
    printf("A distância entre os pontos P1 e P2 é: %.2f\n", dist);

    return 0;
}
