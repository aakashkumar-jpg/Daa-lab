#include <stdio.h>
int binarySearch(int a[], int low, int high, int x){
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == x)
        return mid;
    if (a[mid] > x)
        return binarySearch(a, low, mid - 1, x);
    return binarySearch(a, mid + 1, high, x);
}
int findPair(int a[], int low, int high, int x, int n){
    if (low > high)
        return 0;
    int complement = x - a[low];
    if (binarySearch(a, low + 1, n - 1, complement) != -1){
        printf("%d\n", a[low]);
        printf("%d\n", complement);
        return 1;
    }
    return findPair(a, low + 1, high, x, n);
}
int main(){
    int n, x;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    if (!findPair(a, 0, n - 1, x, n))
        printf("No");
}