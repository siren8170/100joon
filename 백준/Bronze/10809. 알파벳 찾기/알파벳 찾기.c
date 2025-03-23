#include <stdio.h>

int main() {
    char a[101], s = 'a';
    int d = 0, j;
    scanf("%s", a);
    for (int i = 0; i < 26; i++) {
        for (j = 0; a[j] != '\0'; j++) {
            if (a[j] == s) {
                printf("%d ", j);
                break;
            }
        }
        if (a[j] == '\0') 
            printf("%d ", -1);
        s += 1;
    }
}