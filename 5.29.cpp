#include <iostream>

// 計算最大公因數 (GCD) 的輔助函式
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 題目要求的 lcm 函式
int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    // 公式：LCM(a, b) = (|a * b|) / GCD(a, b)
    // 先除以 GCD 再相乘可以避免數值過大溢位 (overflow)
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1 = 12, num2 = 18;
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << std::endl;
    return 0;
}
