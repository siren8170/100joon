#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, s;
    while(scanf("%d %d", &a, &s) == 2){
        printf("%d\n", a+s);
    }
}