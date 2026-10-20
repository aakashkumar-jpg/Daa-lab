#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long dp[n + 1];

    dp[0] = 1;

    if (n >= 1)
        dp[1] = 1;

    if (n >= 2)
        dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }

    printf("%lld", dp[n]);

    return 0;
}