#include <stdio.h>

int main() {
    int n, i, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}