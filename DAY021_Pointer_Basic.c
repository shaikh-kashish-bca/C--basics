#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;
    printf("Value of a = %d", *ptr);
    return 0;
}