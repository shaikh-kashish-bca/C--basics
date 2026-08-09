#include <stdio.h>
int main() {
    int a,b; char op;
    printf("Enter: 5 + 3 ");
    scanf("%d %c %d", &a, &op, &b);
    if(op=='+') printf("%d", a+b);
    else if(op=='-') printf("%d", a-b);
    else if(op=='*') printf("%d", a*b);
    else printf("%d", a/b);
    return 0;
}