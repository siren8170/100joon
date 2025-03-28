#include <stdio.h>

int main() {
    int a[7];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
        if (i < 2)
            printf("%d ", 1 - a[i]);
        else if (i < 5)
            printf("%d ", 2 - a[i]);
        else
            printf("%d ", 8 - a[i]);
    }
}