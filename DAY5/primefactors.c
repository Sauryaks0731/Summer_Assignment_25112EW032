#include <stdio.h>

int main() {
    int num, originalNum;
    int maxPrime = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num; 

    while (num % 2 == 0) {
        maxPrime = 2;
        num = num / 2;
    }

    for (int i = 3; i * i <= num; i = i + 2) {
        while (num % i == 0) {
            maxPrime = i;
            num = num / i; // Reduce the number
        }
    }

    if (num > 2) {
        maxPrime = num;
    }
    printf("The largest prime factor of %d is: %d\n", originalNum, maxPrime);

    return 0;
}