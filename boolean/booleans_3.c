#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    printf("Inserire x: ");
    scanf("%d", &x);
    printf("Inserire y: ");
    scanf("%d", &y);

    if (x >= 0 && x <= 10 && y >= 0 && y <= 10) {
        printf("Il punto (%d, %d) è dentro al quadrato.\n", x, y);
    }
    else {
        printf("Il punto (%d, %d) non è dentro al quadrato.\n", x, y);
    }
}
