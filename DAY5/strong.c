#include <stdio.h>

int main() {
    int num, originalNum, lastDigit;
    long long sum = 0;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    if (num <= 0) {
        printf("%d is NOT a strong number.\n", originalNum);
        return 0;
    }

    while (num > 0) {
        lastDigit = num % 10; 
        
        long long fact = 1;
        for (int i = 1; i <= lastDigit; i++) {
            fact *= i;
        }

        sum += fact; 
        num /= 10;   
      }
    if (sum == originalNum) {
        printf("%d is a STRONG NUMBER.\n", originalNum);
    } else {
        printf("%d is NOT a strong number.\n", originalNum);
    }

    return 0;
}