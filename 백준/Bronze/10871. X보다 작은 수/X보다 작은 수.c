#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, d, f = 0;
    scanf("%d %d", &a, &d);
    for (int i = 0; i < a; i++){
        scanf("%d", &f);
        if(f < d)
            printf("%d ", f);
    }
}