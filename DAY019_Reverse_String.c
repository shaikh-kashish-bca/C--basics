#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str); // Turbo C me kaam karta hai
    printf("Reversed = %s", str);
    return 0;
}