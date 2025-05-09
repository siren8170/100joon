#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* S1 = str1;
    char* S2 = str2;
    int R = 0;
    for(int i = 0; S1[i] != '\0'; i++){
        R++;
    }
    char* answer = (char*)malloc(sizeof(char)*R*2);
    int j = 0;
    for(int i = 0; i < R; i++){
        answer[j++] = S1[i];
        answer[j++] = S2[i];
    }
    answer[R*2] = '\0';
    return answer;
}