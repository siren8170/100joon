#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
    scanf("%d", &a);
    for(int i = a; i > 0; i--){
        for(int j = 1; j < i; j++)
            printf(" ");
        for(int j = a - i; j > 0; j--)
            printf("*");
        printf("*\n");
    }    
}