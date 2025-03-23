#include <stdio.h>
#include <stdbool.h>

// Exercício 3: Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Exercício 4: Função para encontrar números primos em um intervalo
void primosNoIntervalo(int N1, int N2) {
    printf("Números primos entre %d e %d: ", N1, N2);
    for (int i = N1; i <= N2; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N1, N2;
    printf("Digite dois números naturais (N1 e N2): ");
    scanf("%d %d", &N1, &N2);
    primosNoIntervalo(N1, N2);
    return 0;
}
