#include <stdio.h>

// 遞迴解法：將 n 個盤子從 from 移到 to，使用 aux 作為輔助柱
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);           // 將上面 n-1 個盤子移到輔助柱
    printf("Move disk %d from %c to %c\n", n, from, to);  // 移動最大的盤子
    hanoi(n - 1, aux, to, from);           // 再將 n-1 個盤子從輔助柱移到目標柱
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf_s("%d", &n);
    printf("Steps to solve Towers of Hanoi with %d disks:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
