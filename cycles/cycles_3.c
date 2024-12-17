#include <stdio.h>

int main() {
    // TODO: get n from command line
    // 5 x 1 = 5
    // 5 x 2 = 10 
    // 5 x 3 = 15
    // 5 x 4 = 20
    // 5 x 5 = 25
    // ...
    // 5 x 10 = 50
    int n = 6;

    // Versione 2
    // printf("5 x 1 = %d\n", 5 * 1);
    // printf("5 x 2 = %d\n", 5 * 2);
    // printf("5 x 3 = %d\n", 5 * 3);
    // printf("5 x 4 = %d\n", 5 * 4);
    // printf("5 x 5 = %d\n", 5 * 5);
    // printf("5 x 6 = %d\n", 5 * 6);
    // printf("5 x 7 = %d\n", 5 * 7);
    // printf("5 x 8 = %d\n", 5 * 8);
    // printf("5 x 9 = %d\n", 5 * 9);
    // printf("5 x 10 = %d\n", 5 * 10);
    
    // Versione 3
    // printf("%d x 1 = %d\n", n, n * 1);
    // printf("%d x 2 = %d\n", n, n * 2);
    // printf("%d x 3 = %d\n", n, n * 3);
    // printf("%d x 4 = %d\n", n, n * 4);
    // printf("%d x 5 = %d\n", n, n * 5);
    // printf("%d x 6 = %d\n", n, n * 6);
    // printf("%d x 7 = %d\n", n, n * 7);
    // printf("%d x 8 = %d\n", n, n * 8);
    // printf("%d x 9 = %d\n", n, n * 9);
    // printf("%d x 10 = %d\n", n, n * 10);
    
    // Dichiarazione: int a, bool b, float c, char c, string s;
    // Assegnazione: a = 1; b = true; c = 'c'; s = "ciao";
    // Dichiarazion e assegnazione: int i = 0;
    // Componenti principali di un ciclo:
    // - Inizializzazione: da dove inizia il ciclo?
    // - Condizione: fin quando il ciclo deve continuare?
    
    // Versione finale
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}