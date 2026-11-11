#include <stdio.h>
#include <stdlib.h>

// 函式宣告
void modifyArray(int b[], int size);

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;

    printf("呼叫 modifyArray 之前的陣列內容:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // 呼叫函式傳遞陣列 a
    modifyArray(a, 5);

    printf("呼叫 modifyArray 之後的陣列內容 :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

// 函式定義：接收陣列並將每個元素乘以 2
void modifyArray(int b[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        b[i] *= 2; // 直接修改傳進來的陣列記憶體內容
    }
}
