#include<stdio.h>
int main() {
    int n, arr[n], sum = 0, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the binary digits: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of binary digits: %d\n", sum);
    return 0;
}