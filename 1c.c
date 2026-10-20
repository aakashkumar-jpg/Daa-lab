#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = 0;

    for (int i = 1; i <= num; i++) {
        count++;                    // for condition (true)

        count++;                    // if condition
        if (num % i == 0) {
            count++;                // printf("%d ", i)
        }
    }

    count++;                        // final for condition (false)

    printf("%d", count);

    return 0;
}