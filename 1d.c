#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;

    count++;          // c = 0

    for (int i = n/2; i < n; i++) {
        count++;      // outer condition

        for (int j = 1; j < n; j = 2 * j) {
            count++;  // middle condition

            for (int k = 1; k < n; k = 2 * k) {
                count++;  // inner condition
                count++;  // c++
            }

            count++;      // inner condition (false)
        }

        count++;          // middle condition (false)
    }

    count++;              // outer condition (false)

    printf("%d", count);
    return 0;
}