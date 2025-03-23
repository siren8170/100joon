#include <stdio.h>

int main() {
    char a[21];
    int s, d;
    scanf("%d", &s);
    for (int i = s; i > 0; i--) {
        scanf("%d %s", &s, &a[0]);
        for (int j = 0; a[j] != '\0'; j++)
            for (int k = 0; k < s; k++)
                printf("%c", a[j]);
        printf("\n");
    }
}