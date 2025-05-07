#include<stdio.h>

int main(){
    int Q = 0;
    int R = 0;
    scanf("%d", &Q);
    for(int i = 1; i <= Q; i++){
        int a = 1;
        for(int j = 0; j < 8; j++){
            if(a > i){
                a = j;
                break;
            }
            a *= 10;
        }
        int save = i;
        int i1 = i;
        for(int j = 0; j <= a; j++){
            save += i1%10;
            i1 /= 10;
        }
        if(Q == save){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}