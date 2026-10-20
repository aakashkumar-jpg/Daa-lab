#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int i = 1;
    int s = 1;
    int count = 0;
    count++;    
    count++;    
    while (s <= n) {
        count++;
        i++;
        count++;    
        s += i;
        count++;    
    }
    count++;        
    printf("%d", count);
    return 0;
}