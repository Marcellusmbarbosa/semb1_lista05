#include <stdio.h>

void imprime_alguma_coisa(int n) {
    if (n != 0) {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("A representação binária de %d é: ", numero);
    imprime_alguma_coisa(numero);
    printf("\n");
    return 0;
}
