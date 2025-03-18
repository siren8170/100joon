#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, s[101], d, f = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &d);
        s[i] = d;
    }
    scanf("%d", &d);
    for (int i = 0; i < a; i++)
        if (s[i] == d)
            f++;
    printf("%d", f);
}