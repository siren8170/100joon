#include<stdio.h>

int main(){
    int N = 0;
    int S[6] = {0,};
    int t = 0;
    int p = 0;
    int s_t = 0;
    int s_p = 0;
    scanf("%d", &N);
    for(int i = 0; i < 6; i++){
        scanf("%d", &S[i]);
    }
    scanf("%d %d", &t, &p);
    for(int i = 0; i < 6; i++){
        s_t += S[i]/t;
        if (S[i] % t != 0) {
            s_t++;
        }
    }
    s_p = N/p;
    printf("%d\n%d %d", s_t, s_p, N%p);
}