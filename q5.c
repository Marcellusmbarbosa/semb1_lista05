#include <stdio.h>

int compara(int A[], int tamA, int B[], int tamB) {
    // Verifique cada elemento de B
    for (int i = 0; i < tamB; i++) {
        int encontrado = 0; // Flag para verificar se o elemento atual de B foi encontrado em A

        // Verifique o elemento atual de B em A
        for (int j = 0; j < tamA; j++) {
            if (B[i] == A[j]) {
                encontrado = 1;
                break; // Se encontrado, saia do loop interno
            }
        }

        // Se o elemento atual de B não foi encontrado em A, retorne falso
        if (!encontrado) {
            return 0;
        }
    }

    // Se todos os elementos de B foram encontrados em A, retorne verdadeiro
    return 1;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 1};

    int tamA = sizeof(A) / sizeof(A[0]);
    int tamB = sizeof(B) / sizeof(B[0]);

    if (compara(A, tamA, B, tamB)) {
        printf("Todos os elementos de B estao contidos em A.\n");
    } else {
        printf("Nem todos os elementos de B estao contidos em A.\n");
    }

    return 0;
}
