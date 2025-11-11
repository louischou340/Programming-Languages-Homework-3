#include <stdio.h>

// 遞迴函式：計算 base^exponent
long power(long base, int exponent) {
    if (exponent == 1)
        return base;              // 終止條件
    else
        return base * power(base, exponent - 1);  // 遞迴步驟
}

int main() {
    long base;
    int exponent;

    printf("Enter base and exponent: ");
    scanf_s("%ld %d", &base, &exponent);

    printf("%ld^%d = %ld\n", base, exponent, power(base, exponent));
    return 0;
}
