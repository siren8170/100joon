#include<stdio.h>

int main() {
    char q[1000001];
    int a[27] = { 0 };
    int che;
    int fir = 26;
    int sec = -1;
    scanf("%s", q);

    for (int i = 0; q[i] != '\0'; i++) {
        if (q[i] >= 'a') {
            che = q[i]-97;
        }
        else {
            che = q[i]-65;
        }
        a[che] += 1;
    }

    for (int i = 0; i < 26; i++) {
        if (a[fir] < a[i]) {
            sec = fir;
            fir = i;
        }
        else if (a[fir] == a[i]) {
            sec = fir;
        }
    }

    if (fir != sec) {
        printf("%c", fir + 65);
    }
    else {
        printf("?");
    }
}