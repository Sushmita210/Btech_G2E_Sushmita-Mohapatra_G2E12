#include<stdio.h>
int main() {
    int n, a[n], i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}