#include <iostream>

// a) «D»¼°jªº fibonacci ¨ç¦¡
unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev2 = 0; // F(0)
    unsigned long long int prev1 = 1; // F(1)
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    unsigned int n = 10;
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
