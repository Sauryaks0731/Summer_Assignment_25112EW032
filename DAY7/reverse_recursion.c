#include <stdio.h>

int reverse_number(int num, int reversed) {

    if (num == 0) {
        return reversed;
    }

    reversed = (reversed * 10) + (num % 10);

    return reverse_number(num / 10, reversed);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int is_negative = 0;
    if (number < 0) {
        is_negative = 1;
        number = -number; 
    }

    int result = reverse_number(number, 0);

    if (is_negative) {
        result = -result;
    }

    printf("Reversed number: %d\n", result);

    return 0;
}