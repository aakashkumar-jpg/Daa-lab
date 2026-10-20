#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int board[n][n];
    long long dp[n][n];

    // Read the chessboard
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    dp[0][0] = board[0][0];

    // First row
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j - 1] + board[0][j];
    }

    // First column
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + board[i][0];
    }

    // Fill the remaining cells
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (dp[i - 1][j] > dp[i][j - 1])
                dp[i][j] = board[i][j] + dp[i - 1][j];
            else
                dp[i][j] = board[i][j] + dp[i][j - 1];
        }
    }

    printf("%lld", dp[n - 1][n - 1]);

    return 0;
}