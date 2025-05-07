#include<stdio.h>

int main(){
    int A = 0;
    int S = 0;
    int D = 0;
    scanf("%d %d", &A, &S);
    
    int R = A*S;
    
    scanf("%d %d %d", &A, &S, &D);
    printf("%d", R - (A*S*D));
}