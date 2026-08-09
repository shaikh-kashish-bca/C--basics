#include <stdio.h>
struct Book { char title[20]; int price; };
int main() {
    struct Book b[2];
    for(int i=0; i<2; i++) scanf("%s %d", b[i].title, &b[i].price);
    for(int i=0; i<2; i++) printf("%s %d\n", b[i].title, b[i].price);
    return 0;
}