#include <stdio.h>
struct Student {
    char name[20];
    int roll;
    float marks;
};
int main() {
    struct Student s1;
    printf("Enter name roll marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);
    printf("Name:%s Roll:%d Marks:%.2f", s1.name, s1.roll, s1.marks);
    return 0;
}