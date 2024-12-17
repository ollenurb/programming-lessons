#include <stdio.h>

// n = 5
// (1) + 2 + 3 + 4
// (1 + 2) + 3 + 4
int main() {
    int sum = 0;
    int n = 0;
    printf("Insert the value of n: \n");
    scanf("%d", n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;        
    }

    printf("The sum from 0 to %d is %d", n, sum);

    // Con i = 0
    // sum = 0 + 0
    // sum = 0 + 1
    // sum = 1 + 2
    // sum = 3 + 3
    // sum = 6 + 4
    // sum = 10 + 5 = 15
    //
    // Con i = 1
    // sum = 0 + 1
    // sum = 1 + 2
    // sum = 3 + 3
    // sum = 6 + 4
    // sum = 10 + 5 = 15
}
