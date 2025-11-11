#include <stdio.h>
#include <limits.h>  // 為了使用 ULLONG_MAX

int main() {
    unsigned long long prev1 = 0, prev2 = 1, current = 0;
    int n = 1;  // 記錄第幾項

    printf("Fibonacci sequence within unsigned long long range:\n");
    printf("F(0) = %llu\n", prev1);
    printf("F(1) = %llu\n", prev2);

    while (1) {
        // 檢查是否會超出 unsigned long long 的上限
        if (ULLONG_MAX - prev1 < prev2)
            break;  // 若加法會溢位，停止

        current = prev1 + prev2;
        n++;
        printf("F(%d) = %llu\n", n, current);
        prev1 = prev2;
        prev2 = current;
    }

    printf("\nLargest Fibonacci number that fits in unsigned long long:\n");
    printf("F(%d) = %llu\n", n, current);
    return 0;
}
