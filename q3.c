#include <stdio.h>

// Função para calcular a soma dos divisores próprios de um número
int somaDivisoresProprios(int n) {
    int soma = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    return soma;
}

// Função para verificar se dois números são amigos
int amigos(int a, int b) {
    // Calcula as somas dos divisores próprios de a e b
    int somaA = somaDivisoresProprios(a);
    int somaB = somaDivisoresProprios(b);

    // Verifica se são amigos
    if (somaA == b && somaB == a) {
        return 1; // São amigos
    } else {
        return 0; // Não são amigos
    }
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &num1, &num2);

    if (amigos(num1, num2)) {
        printf("%d e %d são números amigos.\n", num1, num2);
    } else {
        printf("%d e %d não são números amigos.\n", num1, num2);
    }

    return 0;
}
