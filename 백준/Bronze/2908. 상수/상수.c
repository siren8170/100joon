#include <stdio.h>

int main() {
    char a[4] = { 0 };
    char s[4] = { 0 };
    scanf("%s%s", a, s);

    int numA = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
    int numS = (s[2] - '0') * 100 + (s[1] - '0') * 10 + (s[0] - '0');

    if (numA > numS) printf("%c%c%c", a[2], a[1], a[0]);
    else printf("%c%c%c", s[2], s[1], s[0]);
}