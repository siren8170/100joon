#include<stdio.h>

int main(void) {
    int A = 0;
    int Temp = 0;
    int A_ = 0;

    while (1) {
        A_ = 0;
        scanf("%d", &A);

        if (A == 0) break;

        Temp = A;
        int t = 0;
        for (int i = 1; i <= 10000; i *= 10) {
            if (Temp / (i*10) == 0) {
                t = i;
                break;
            }
        }
        for (int i = t; i >= 1; i /= 10) {
            A_ += (Temp % 10) * i;
            Temp /= 10;
        }

        if (A_ == A) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }

    }
}