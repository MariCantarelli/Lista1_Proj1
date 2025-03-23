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

int main() {
    int n;
    printf("Digite um número natural maior que 1: ");
    scanf("%d", &n);
    printf("O número %d %s primo.\n", n, ehPrimo(n) ? "é" : "não é");
    return 0;
}