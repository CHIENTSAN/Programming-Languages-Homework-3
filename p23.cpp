#include <stdio.h>
#include <stdlib.h>

// 宣告 addbyone 函式
int addbyone(int x);

int main(void)
{
    int x = 100; // 主程式的 x
    
    int y = addbyone(x); // 傳值呼叫 (Call by value)
    
    // 印出主程式的 x，數值仍然是 100
    printf("main 裡的 x = %d\n", x);
    
    system("pause");
    return 0;
}

// 函式定義
int addbyone(int x)
{
    x++; // 這裡改變的是拷貝過來的區域變數 x
    printf("addbyone 裡的 x = %d\n", x);
    return x;
}
