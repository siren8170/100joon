#include<stdio.h>

int main(){
    int A[3] = { 0, };
    int count = 1;
    for(int i = 0; i < 3; i++){
        scanf("%d", &A[i]);
    }
    printf("%d\n", A[0]+A[1]-A[2]);
    while(1){
        if(A[1]/count < 10){
            A[0] *= count*10;
            break;
        }
        count *= 10;
    }
    printf("%d\n", A[0]+A[1]-A[2]);
}