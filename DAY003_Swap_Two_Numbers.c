#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // SWAPPING LOGIC
    temp = a; 
    a = b;     
    b = temp;  

    printf("After Swap: a = %d, b = %d", a, b);

    return 0;
}