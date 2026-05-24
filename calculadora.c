#include <stdio.h>
#include "calculos.h"

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