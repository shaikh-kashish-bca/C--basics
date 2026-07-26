#include<stdio.h>

int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d Even number", num);
    else
        printf("%d Odd number", num);

    return 0;
}