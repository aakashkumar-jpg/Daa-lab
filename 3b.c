#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < n; i++){
        if (nums[i] == candidate)
            count++;
        else
            count--;
        if (count == 0){
            candidate = nums[i];
            count = 1;
        }
    }
    printf("%d", candidate);
}