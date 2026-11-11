#include <stdio.h>
#include <stdlib.h>

void staticArrayTest(void)
{
    // 宣告一個靜態陣列，若不給初值，預設全部元素皆為 0
    static int array1[3]; 
    int i;

    printf("呼叫前陣列內容: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    // 修改陣列內容
    for (i = 0; i < 3; i++)
    {
        array1[i] += 5; // 每次呼叫把每個元素加 5
    }

    printf("呼叫後陣列內容: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n--------------------\n");
}

int main(void)
{
    // 連續呼叫三次函式，觀察 static 陣列是否會保留上一次的數值
    staticArrayTest();
    staticArrayTest();
    staticArrayTest();

    system("pause");
    return 0;
}
