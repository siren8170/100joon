#include<stdio.h>

int main(){
    int A[2];
    int W = 0;
    int E = 0;
    
    scanf("%d %d", &W, &E);
    
    A[0] = (E*2 > W) ? E : W - E;
    scanf("%d", &E);
    A[1] = (E*2 > W) ? E : W - E;
    
    printf("%d", A[0]*A[1]*4);
}