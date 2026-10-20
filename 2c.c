#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int c, count = 0;

    if (scanf("%d", &c) != 1)
        return 0;

    int d[c];

    for (int i = 0; i < c; i++) {
        scanf("%d", &d[i]);
    }

    qsort(d, c, sizeof(int), cmp);

    for (int i = 0; i < c; i++) {
        count += (int)pow(c, i) * d[i];
    }

    printf("%d\n", count);

    return 0;
}