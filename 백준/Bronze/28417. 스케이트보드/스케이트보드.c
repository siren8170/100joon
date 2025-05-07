#include<stdio.h>

int main(){
    int count = 0;
    int A1[2];
    int A2;
    int R0 = 0;
    
    scanf("%d", &count);
    for(int i = 0; i < count; i++){
        int R1 = 0;
        scanf("%d %d", &A1[0], &A1[1]);
        R1 += (A1[0]>A1[1]) ? A1[0] : A1[1];
        
        int fir = 0;
        int sec = 0;
        for(int j = 0; j < 5; j++){
            scanf("%d", &A2);
            if(A2 > fir){
                sec = fir;
                fir = A2;
            }
            else if(A2 > sec){
                sec = A2;
            }
        }
        R1 += fir+sec;
        if(R1 > R0){
            R0 = R1;
        }
    }
    printf("%d", R0);
}