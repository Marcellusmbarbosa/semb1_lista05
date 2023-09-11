#include <stdio.h>

long long int fat(int n) {
    // Caso base: o fatorial de 0 é 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: fatorial de n = n * fatorial de (n-1)
    return n * fat(n - 1);
}

int main() {
    int numero;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        long long int resultado = fat(numero);
        printf("O fatorial de %d é %lld\n", numero, resultado);
    }

    return 0;
}
