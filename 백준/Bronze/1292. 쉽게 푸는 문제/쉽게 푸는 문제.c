#include<stdio.h>

int main(){
    int a, q;
    int s = 0;
    int count = 0;
    int flag = 0;
    scanf("%d %d", &a, &q);
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j < i; j++){
            count++;
            if(count == a){
                flag = 1;
            }
            if(flag == 1){
                s += i;
            }
            if(count == q){
                printf("%d", s);
                return 0;
            }
        }
    }
}