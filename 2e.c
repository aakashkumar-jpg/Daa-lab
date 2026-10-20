#include <stdio.h>
#include <stdlib.h>
int ascending(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    return 0;
}
int descending(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y)
        return 1;
    else if (x > y)
        return -1;
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
    qsort(A, n, sizeof(int), ascending);
    qsort(B, n, sizeof(int), descending);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (long long)A[i] * B[i];
    }
    printf("%lld", sum);
    return 0;
}