#include <iostream>

// 題目要求的遞迴函式 power
long long power(long long base, int exponent) {
    // 終止條件：當 exponent 等於 1 時回傳 base
    if (exponent == 1) {
        return base;
    }
    // 遞迴步驟：base * power(base, exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    long long base = 3;
    int exponent = 4;
    std::cout << "power(" << base << ", " << exponent << ") = " << power(base, exponent) << std::endl;
    return 0;
}
