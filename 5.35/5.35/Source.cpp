#include <stdio.h>

// 非遞迴方式計算第 n 個 Fibonacci 數
unsigned long long fibonacci(unsigned int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    unsigned long long prev1 = 0, prev2 = 1, current;
    for (unsigned int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main() {
    unsigned int n;
    printf("Enter n: ");
    scanf_s("%u", &n);
    printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    return 0;
}
