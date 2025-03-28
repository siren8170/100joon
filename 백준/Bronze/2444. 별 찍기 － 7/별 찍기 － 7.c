#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int j = 1; j <= a * 2 - 1; j++) {
        for (int k = 0; k < abs(a - j); k++) {
            printf(" ");
        }
        for (int k = 0; k < (a * 2 - 1) - (abs(a - j) * 2); k++) {
            printf("*");
        }
        printf("\n");
    }
}