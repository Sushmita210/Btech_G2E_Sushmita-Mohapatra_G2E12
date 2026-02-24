#include <stdio.h>

int main() {
    int n = 6;  // number of rows
    int i, j, space;
    int coef;

    for(i = 0; i < n; i++) {
        coef = 1;

        // Print spaces
        for(space = 1; space <= n - i; space++)
            printf("  ");

        // Print numbers
        for(j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}