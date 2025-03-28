#include <stdio.h>

int main() {
    char a[16];
    int add = 0;
    scanf("%s", a);
    for (int i = 0; a[i] != '\0'; i++) {
        int j = 5;
        int count = 3;
        while (1) {
            if (a[i] - '?' < j) break;
            count++;
            if (j == 17 || j >= 23) j += 4;
            else j += 3;
        }
        add += count;
    }
    printf("%d", add);
}