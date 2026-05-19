#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}



int main() {
    int a, b;

    printf("Insira um numero: ");
    scanf("%d", &a);
    printf("Insira outro numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", soma(a, b));
    printf("Subtracao: %d\n", sub(a, b));
    printf("Multiplicacao: %d\n", mult(a, b));
    printf("Divisao: %d\n", div(a, b));
}