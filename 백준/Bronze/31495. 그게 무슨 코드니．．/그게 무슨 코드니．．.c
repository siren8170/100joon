#include<stdio.h>

int main() {
    char Q[51];
    char T;
    scanf(" %[^\n]", Q);
    int W = 0;

    for (int i = 0; Q[i] != '\0'; i++) {
        W = i;
    }

    if (Q[0] == '"' && Q[W] == '"' && W > 1) {
        for (int i = 0; i != W; i++) {
            Q[i] = Q[i + 1];
        }
        Q[W - 1] = '\0';

        printf("%s", Q);
    }
    else {
        printf("CE");
    }
}