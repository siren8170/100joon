#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[101];
    int count = 0;
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++) count++;
    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] != a[--count]) {
            printf("0");
            return 0;
        }
    printf("1");
    return 0;
}