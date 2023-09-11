#include <stdio.h>

double pot(int a, int b) {
    // Caso base: Se b for 0, a qualquer número elevado a 0 é igual a 1.
    if (b == 0) {
        return 1.0;
    }
    // Caso b seja negativo, invertemos a base e tornamos o expoente positivo.
    if (b < 0) {
        a = 1 / a;
        b = -b;
    }
    
    // Caso recursivo: Calcula a potência a^b dividindo o problema em partes menores.
    // Utiliza a recursão para calcular a metade da potência e depois multiplica
    // o resultado por si mesmo.
    double metade = pot(a, b / 2);
    if (b % 2 == 0) {
        // Se b for par, a^b = (a^(b/2)) * (a^(b/2))
        return metade * metade;
    } else {
        // Se b for ímpar, a^b = a * (a^(b/2)) * (a^(b/2))
        return a * metade * metade;
    }
}

int main() {
    int a = 2;
    int b = 3;
    double resultado = pot(a, b);
    printf("%d^%d = %.2lf\n", a, b, resultado);
    return 0;
}
