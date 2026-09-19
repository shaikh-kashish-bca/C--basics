#include<stdio.h>

int main() {
    int num, i;
    long long fact = 1; 
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("%d ka Factorial = %lld", num, fact);
    return 0;
}