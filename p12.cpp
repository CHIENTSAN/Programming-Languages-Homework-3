#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 宣告並初始化一個 3x4 的二維陣列
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int total = 0;
    int row, column;

    // 將 3x4 二維陣列控制元素做加總[cite: 8]
    total = 0;
    for ( row = 0; row <= 2; row++ )
    {
        for ( column = 0; column <= 3; column++ )
        {
            total += a[ row ][ column ];
        }
    }

    // 印出加總結果
    printf("二維陣列元素總和為: %d\n", total);

    system("pause");
    return 0;
}
