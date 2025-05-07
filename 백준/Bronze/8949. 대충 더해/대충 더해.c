#include<stdio.h>

int main(){
    int A1 = 0;
    int A2 = 0;
    int R[7] = {0, 0, 0, 0, 0, 0, 0};
    int top = -1;
    scanf("%d %d", &A1, &A2);

    while(A1 != 0 || A2 != 0){
        top++;
        R[top] = A1%10 + A2%10;
        A1 /= 10;
        A2 /= 10;
    }
    for(int i = top; i >= 0; i--){
        printf("%d", R[i]);
    }
}