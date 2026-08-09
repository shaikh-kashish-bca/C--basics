#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    fprintf(fp, "Hello File");
    fclose(fp);
    printf("Data written");
    return 0;
}