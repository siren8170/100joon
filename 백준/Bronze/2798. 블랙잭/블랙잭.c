#include<stdio.h>

int main(){
    int count = 0;
    int R = 0;
    int a, s, d;
    int Z[100];
    int Y = 0;
    int RealLast = 0;
    scanf("%d %d", &count, &R);
    for(int i = 0; i < count; i++){
        scanf("%d", &Z[i]);
    }
    for(int i = 0; i < count-2; i++){
        a = Z[i];
        for(int j = i+1; j < count-1; j++){
            s = Z[j];
            for(int k = j+1; k < count; k++){
                d = Z[k];
                Y = a+s+d;
                if(RealLast < Y && Y <= R){
                    RealLast = Y;
                }
            }
        }
    }
    printf("%d", RealLast);
}