#include <stdio.h>

// Exercício 1: Função para inverter um número
int inverterNumero(int n) {
    int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }
    return invertido;
}

int main() {
    int num;
    printf("Digite um número inteiro (sem dígito 0): ");
    scanf("%d", &num);
    printf("Número invertido: %d\n", inverterNumero(num));
    return 0;
}