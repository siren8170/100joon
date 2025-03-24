#include <stdio.h>

int main() {
    char a[1000001];
    int q = 0, j = 0;
    gets(a);
    do {
        j++;
        if (a[j] == ' ' || a[j] == '\0') {
            if(a[j-1] != ' ' && a[j-1] != '\0')
                q++;
        }
    } while (a[j] != '\0');
    printf("%d", q);
}