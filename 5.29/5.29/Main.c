#include <stdio.h>

// helper function to find greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// function to find least common multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf_s("%d %d", &num1, &num2);

    printf("LCM = %d\n", lcm(num1, num2));

    return 0;
}
