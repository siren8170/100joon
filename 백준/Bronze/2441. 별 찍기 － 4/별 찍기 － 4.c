#include<stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    for (int i = a; i > 0; i--) {
        for(int k = a-i; k > 0; k--){
            printf(" ");
        }
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}