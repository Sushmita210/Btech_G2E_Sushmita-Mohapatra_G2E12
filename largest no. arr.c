#include<stdio.h>
int main () {
    int n, i;
    printf("Enter a number : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int greatest = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] > greatest) {
            greatest = arr[i];
        }
    }
    printf("Greatest element is: %d", greatest);
    return 0;
}