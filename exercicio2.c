#include <stdio.h>
#include <stdbool.h>

// Exercício 2: Função para verificar se dois números têm o mesmo último dígito
bool ultimoDigito(int a, int b) {
    return (a % 10) == (b % 10);
}

int main() {
    int a, b;
    printf("Digite dois números inteiros não negativos: ");
    scanf("%d %d", &a, &b);
    printf("Últimos dígitos iguais? %s\n", ultimoDigito(a, b) ? "true" : "false");
    return 0;
}
