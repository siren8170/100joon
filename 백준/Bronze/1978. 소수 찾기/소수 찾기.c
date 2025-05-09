#include<stdio.h>

int main(){
    int T[1001] = {1, 1, 0,};
    int I = 0;
    int sum = 0;
    int n = 0;
    
    for(int i = 2; i < 1000; i++){
        if(T[i] == 0){
            for(int j = i*2; j < 1001; j += i){
                T[j] = 1;
            }
        }
    }
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &I);
        if(T[I] == 0){
            sum++;
        }
    }
    printf("%d", sum);
}