#include <stdio.h>
int countZeroes(int a[], int low, int high, int n)
{
    if (low > high)
        return 0;
    int mid = (low + high) / 2;
    if (a[mid] == 0)
    {
        if (mid == 0 || a[mid - 1] == 1)
            return n - mid;
        return countZeroes(a, low, mid - 1, n);
    }
    return countZeroes(a, mid + 1, high, n);
}
int main()
{
    int m;
    scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);
    printf("%d", countZeroes(a, 0, m - 1, m));
}