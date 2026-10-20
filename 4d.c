#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int dp[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        dp[i] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {

            if (arr[j] <= arr[i]) {
                if (dp[j] + 1 > dp[i])
                    dp[i] = dp[j] + 1;
            }
        }
    }

    int answer = dp[0];

    for (int i = 1; i < n; i++) {
        if (dp[i] > answer)
            answer = dp[i];
    }

    printf("%d", answer);

    return 0;
}