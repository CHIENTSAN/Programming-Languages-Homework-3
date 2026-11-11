#include <iostream>
#include <cctype> // 引入 toupper 和 tolower 函式

char changeCase(char ch) {
    if (std::islower(ch)) {
        return std::toupper(ch);
    } else if (std::isupper(ch)) {
        return std::tolower(ch);
    }
    return ch; // 若不是英文字母則維持原樣
}

int main() {
    char testChar = 'Z';
    std::cout << "Original: " << testChar << std::endl;
    std::cout << "Changed: " << changeCase(testChar) << std::endl;
    return 0;
}
