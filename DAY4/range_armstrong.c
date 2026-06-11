#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, i, temp, remainder, digits, sum;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        sum = 0;
        temp = i;

       
        digits = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i; 
        while (temp != 0) {
            remainder = temp % 10;

            sum = sum + (int)(pow(remainder, digits) + 0.5);
            temp /= 10;
        }

        if (i == sum) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}