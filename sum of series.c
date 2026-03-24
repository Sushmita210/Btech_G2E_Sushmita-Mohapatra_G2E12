#include<stdio.h>
int main () {
    int n, i;
    float sum = 0.0;

    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        sum += 1.0/i;
    }
    printf("Sum of series = %f", sum);
    return 0;
}