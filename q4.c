#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void inverte(int A[], int n) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio < fim) {
        // Troca os elementos do início e do fim do vetor
        troca(&A[inicio], &A[fim]);

        // Move os índices para dentro do vetor
        inicio++;
        fim--;
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Vetor original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    inverte(A, n);

    printf("\nVetor invertido: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
        
    }
    printf("\n");

    return 0;
}
