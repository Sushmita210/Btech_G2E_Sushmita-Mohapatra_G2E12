#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check Triangle Validity using Triangle Inequality Theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides form a valid triangle.\n");

        // Determine Type
        if (a == b && b == c) {
            printf("It is an Equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles Triangle.\n");
        }
        else {
            printf("It is a Scalene Triangle.\n");
        }
    }
    else {
        printf("The sides do NOT form a valid triangle.\n");
    }

    return 0;
}