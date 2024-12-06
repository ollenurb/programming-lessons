// Scrivere un programma che, chieda inizialmente in input 3 numeri x_1, x_2,
// x_3 all'utente. Successivamente, chieda all'utente di inserire un ulteriore
// numero tra 1, 2 o 3 rappresentante la scelta dell'operazione da effettuare sui
// 3 numeri inseriti precedentemente.
//     * Se la scelta è 1, il programma stampa a video la *somma* dei 3 numeri.
//     * Se la scelta è 2, il programma stampa a video il *prodotto* dei 3 numeri.
//     * Se la scelta è 3, il programma stampa a video la *media* dei 3 numeri.
//     * Se la scelta *non è compresa* tra 1, 2 o 3, stampa a video un messaggio
//       di errore.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x_1, x_2, x_3;
    int choice;
    printf("Insert x_1: ");
    scanf("%d", &x_1);
    printf("Insert x_2: ");
    scanf("%d", &x_2);
    printf("Insert x_3: ");
    scanf("%d", &x_3);
    
    printf("Choose the operation to carry out on the specified numbers:\n");
    printf("1. Sum\n");
    printf("2. Product\n");
    printf("3. Mean\n");
    scanf("%d", &choice);
    
    int result = 0;
    
    switch (choice) {
        case 1:
            result = x_1 + x_2 + x_3;
            break;
        case 2:
            result = x_1 * x_2 * x_3;
            break;
        case 3:
            result = (x_1 + x_2 + x_3) / 3;
            break;
        default:
            printf("Error: choice must be between 1 and 3.\n");
            exit(0);
    } 
    
    // La porzione di codice delimitata dallo switch è equivalente a questa
    // porzione di codice
    // 
    // if (choice == 1) {
    //     result = x_1 + x_2 + x_3;
    // } else if (choice == 2) {
    //     result = x_1 * x_2 * x_3;
    // } else if (choice == 3) {
    //     result = (x_1 + x_2 + x_3) / 3;
    // } else {
    //     printf("Error: choice must be between 1 and 3.");
    //     exit(0);
    // }
    
    printf("Result: %d\n", result);
}