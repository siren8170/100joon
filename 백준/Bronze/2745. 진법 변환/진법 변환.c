#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char A[7];
    int aaa;
    int Aa = 0;

    scanf("%s %d", A, &aaa);

    int len = strlen(A);
    for (int i = 0; i < len; i++) {
        int d;
        if (A[i] >= 'A') {
            d = A[i] - 'A' + 10;
        }
        else {
            d = A[i] - '0';
        }
        Aa += d * pow(aaa, len - 1 - i);
    }
    printf("%d\n", Aa);
}