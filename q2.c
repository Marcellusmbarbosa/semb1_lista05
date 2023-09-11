#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int i) {
    if (i <= 1) {
        return 0; // 0 e 1 não são primos
    }
    if (i <= 3) {
        return 1; // 2 e 3 são primos
    }
    if (i % 2 == 0 || i % 3 == 0) {
        return 0; // Números divisíveis por 2 ou 3 não são primos
    }
    
    // Verificar primos a partir de 5
    for (int j = 5; j * j <= i; j += 6) {
        if (i % j == 0 || i % (j + 2) == 0) {
            return 0; // Números divisíveis por j ou j+2 não são primos
        }
    }
    
    return 1; // Se não foi encontrado divisor, é primo
}

int main() {
    int n;
    
    printf("Digite um valor inteiro n: ");
    scanf("%d", &n);
    
    printf("Números primos de 1 até %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
