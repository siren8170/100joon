#include <stdio.h>
#include <limits.h>

int main() {
    int a, s, d = INT_MIN, f = INT_MAX ;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &s);
        if (i == 0) {
            d = s;
            f = s;
        }
        if (s > d)
            d = s;
        else if (s < f)
            f = s;
    }
    printf("%d %d", f, d);
}