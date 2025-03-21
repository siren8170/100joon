#include <stdio.h>

int main() {
    int a[1001], M = 0, c;
    double S = 0.0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        scanf("%d", &a[i]);
        if (M < a[i])
            M = a[i];
    }
    for (int i = 0; i < c; i++) {
        S += (double)a[i] / M * 100;
    }
    printf("%f", (double)S / c);
}