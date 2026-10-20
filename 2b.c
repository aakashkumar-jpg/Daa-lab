#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}
int main() {
    int n, m;
    scanf("%d", &n);
    int g[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &g[i]);
    }
    scanf("%d", &m);
    int s[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &s[i]);
    }
    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);
    int i = 0;  
    int j = 0;  
    int count = 0;
    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            count++;
            i++;
            j++;
        } 
        else {
            j++;
        }
    }
    printf("%d", count);
    return 0;
}
