#include <stdio.h>

int main() {
    int original_num, num, remainder;
    int reversed_num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0) {
        remainder = num % 10;                 
        reversed_num = reversed_num * 10 + remainder; 
        num /= 10;                             
    }
    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}
