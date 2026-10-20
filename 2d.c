#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort in ascending order
    qsort(arr, n, sizeof(int), compare);

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (long long)arr[i] * i;
    }

    printf("%lld", sum);

    return 0;
}