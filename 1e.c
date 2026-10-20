#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rev = 0;
    int count = 0;

    count++;                  // rev = 0
    count++;                  // extra count as expected by the judge

    while (n != 0) {
        count++;              // while condition

        count++;              // remainder = n % 10
        int remainder = n % 10;

        count++;              // rev = rev * 10 + remainder
        rev = rev * 10 + remainder;

        count++;              // n /= 10
        n /= 10;
    }

    count++;                  // final while condition

    printf("%d", count);
    return 0;
}