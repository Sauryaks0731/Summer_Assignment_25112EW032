#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, remainder;
    long long product = 1;
    printf("Enter any integer number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = abs(num);

    if (temp == 0) {
        product = 0;
    } else {
        while (temp > 0) {
            remainder = temp % 10;   
            product *= remainder;   
            temp /= 10;            
    }
  }
    printf("The product of the digits of %d is: %lld\n", num, product);

    return 0;
}
