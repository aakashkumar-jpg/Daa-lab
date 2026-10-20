#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;

    count++;          // if condition
    if (n == 1) {
        count++;      // printf("*")
    } else {
        for (int i = 1; i <= n; i++) {

            count++;  // outer loop condition (true)

            for (int j = 1; j <= n; j++) {

                count++;  // inner loop condition (true)

                count++;  // first printf("*")
                count++;  // second printf("*")

                break;
            }

            count++;      // inner loop condition (false)
        }

        count++;          // outer loop condition (false)
    }

    printf("%d", count);

    return 0;
}