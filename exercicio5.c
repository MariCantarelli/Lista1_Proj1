#include <stdio.h>

// Exercício 5: Função para somar os elementos pares de um vetor
int somaPares(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            soma += v[i];
        }
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("Soma dos elementos pares: %d\n", somaPares(v, n));
    return 0;
}
