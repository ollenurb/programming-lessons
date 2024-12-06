// Scrivere un programma cicli_1.c che implementa i seguenti punti:
// 1. Dato un intero n letto da input con scanf, si stampino a video tutti gli
// interi da 0 a n e poi da n a 0.
// DOMANDA: Quale ciclo è più appropriato?
// 2. Successivamente si stampino a video tutti gli interi dispari da 0 a n
// 3. Infine si stampi a video il fattoriale di !n = 1 * 2 * 3 * ... * n
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n = 0;
    printf("Insert a decimal value: ");
    scanf("%d", &n);
    
    // parte 1
    printf("Ascending from 0 to %d: ", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    // per evitare di vedere il carattere '%' sul terminale.
    printf("\n");

    // parte 2
    printf("Descending from %d to 0: ", n);
    int i = n;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    
    // parte 3
    printf("Odd numbers from 0 to %d: ", n);
    for (int i = 1; i <= n; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");
    
    // parte 4
    // 3. Infine si stampi a video il fattoriale di !n = 1 * 2 * 3 * ... * n
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d.\n", n, factorial);
}