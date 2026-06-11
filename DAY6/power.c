#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent, abs_exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        abs_exponent = -exponent;
    } else {
        abs_exponent = exponent;
    }

    for (int i = 0; i < abs_exponent; i++) {
        result = result * base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf^%d = %.6lf\n", base, exponent, result);

    return 0;
}