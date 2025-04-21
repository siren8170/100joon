#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // 테스트 케이스 개수

    while (T--) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = (N - 1) % H + 1;
        int room = (N - 1) / H + 1;

        printf("%d%02d\n", floor, room);
    }
}