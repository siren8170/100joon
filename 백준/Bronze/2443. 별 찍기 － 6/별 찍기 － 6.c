#include<stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    for (int i = a; i >= 1; i--) {
        for (int gg = a-i; gg > 0; gg--) {
            printf(" ");
        }
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}