#include<stdio.h>
int main () {
    int n, i;
    float sum=0, avg;
    printf("Enter a number : ");
    scanf("%d", &n);
    float arr[n];
    for(i=0; i<n; i++) {
        printf("Enter a number : ");
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);
    return 0;
}