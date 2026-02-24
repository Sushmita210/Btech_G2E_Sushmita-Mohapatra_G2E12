#include<stdio.h>
int main() {
    int n, arr1[n], arr2[n], arr3[n], i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<n; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("The sum of the two arrays is: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}