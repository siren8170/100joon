#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[42] = { 0 };
    int s, f = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &s);
        int c = s % 42;
        if (a[c] == 0) {
            a[c] = 1;
            f++;
        }
    }
    printf("%d\n", f);
}