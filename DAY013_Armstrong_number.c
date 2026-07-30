#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate sum of digits^digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check Armstrong
    if (sum == num)
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}