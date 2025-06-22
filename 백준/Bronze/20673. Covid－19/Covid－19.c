#include<stdio.h>

int main(){
    int A, S;
    scanf("%d %d", &A, &S);
    if(S > 30){
        printf("Red");
    }
    else if(A <= 50 && S <= 10){
        printf("White");
    }
    else{
        printf("Yellow");
    }
}