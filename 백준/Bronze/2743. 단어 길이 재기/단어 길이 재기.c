#include <stdio.h>

int main() {
    char a[101];
    scanf("%s", a);
    int i = 0;
    while(1){
        if(a[i] == '\0'){
            printf("%d", i);
            return 0;
        }
        i++;
    }
}