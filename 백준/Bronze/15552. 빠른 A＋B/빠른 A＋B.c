#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, s, d;
    scanf("%d", &a);
    for(int i = 0; i < a; i++){
        scanf("%d %d", &s, &d);
        printf("%d\n", s+d);
    }
}