#include<stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, next;
    
    printf("Kitne terms chahiye: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    for(i = 1; i <= n; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    
    return 0;
}