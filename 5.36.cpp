#include <iostream>

// 河內塔遞迴函式
// n: 盤子數量
// source: 起始柱子
// dest: 目標柱子
// temp: 輔助柱子
void solveHanoi(int n, char source, char dest, char temp) {
    if (n == 1) {
        std::cout << "Move disk 1 from peg " << source << " to peg " << dest << std::endl;
        return;
    }
    // 1. 將上面 n-1 個盤子從 source 透過 dest 移到 temp
    solveHanoi(n - 1, source, temp, dest);
    
    // 2. 將第 n 個盤子從 source 移到 dest
    std::cout << "Move disk " << n << " from peg " << source << " to peg " << dest << std::endl;
    
    // 3. 將 n-1 個盤子從 temp 透過 source 移到 dest
    solveHanoi(n - 1, temp, dest, source);
}

int main() {
    int n = 4; // 以 4 個盤子為例[cite: 5]
    solveHanoi(n, 'A', 'B', 'C');
    return 0;
}
