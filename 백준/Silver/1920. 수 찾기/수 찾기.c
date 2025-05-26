#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long int A = *(long long int*)a;
    long long int B = *(long long int*)b;
    if (A < B) return -1;
    else if (A > B) return 1;
    else return 0;
}

int binary_search(long long int *arr, int size, long long int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return 1;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}

int main() {
    int N, M;
    scanf("%d", &N);
    long long int *A = (long long int *)malloc(sizeof(long long int) * N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    // 배열 정렬
    qsort(A, N, sizeof(long long int), compare);

    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        long long int x;
        scanf("%lld", &x);
        if (binary_search(A, N, x)) printf("1\n");
        else printf("0\n");
    }

    free(A);
    return 0;
}