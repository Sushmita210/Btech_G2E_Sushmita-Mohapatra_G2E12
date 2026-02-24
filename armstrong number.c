#include<stdio.h>
#include<math.h>
int main() {
    int num, originalNum, num1, remainder, n, result ;
    printf("Armstrong numbers between 1 and 100 are: \n");
    for(num = 1; num < 100; num++) {
        originalNum = num;
        n = 0;
        result = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if(result == num) {
            printf("%d\n", num);
        }
    }
