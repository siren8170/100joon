#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[31] = {0}, s,  d = 0;
    for(int i = 0; i < 28; i++){
        scanf("%d", &s);
        a[s-1] = s;
    }
    for(int i = 0; i < 30; i++){
        if(a[i] == 0){
            printf("%d\n", i+1);
            if(++d == 2)
                break;
        }
    }
}