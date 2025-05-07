#include<stdio.h>

int main(){
    char Q;
    short a = 0;
    while(scanf("%c", &Q) != EOF){
        if(a == 1 && Q == '2'){
            printf("D2");
            return 0;
        }
        else{
            a = 0;
        }
        
        if(Q == 'd' || Q == 'D'){
            a = 1;
        }
    }
    printf("unrated");
}