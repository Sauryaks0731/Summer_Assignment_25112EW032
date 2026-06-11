#include <stdio.h>

int main() {
    unsigned int num, originalNum;
    int count = 0;

    printf("Enter an integer: ");
    if (scanf("%u", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num; 

    while (num > 0) {
      
        count += (num & 1); 
        
        num = num >> 1; 
    }

    printf("The number of set bits (1s) in %u is: %d\n", originalNum, count);

    return 0;
}