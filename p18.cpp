#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 1. 字串陣列的初始化方式 (結尾會自動或手動包含 '\0')
    char string1[] = "FIRST";
    char string2[] = {'F', 'I', 'R', 'S', 'T', '\0'};

    // 2. 使用 printf 與 %s 印出字串
    printf("string1 內容為: %s\n", string1);
    printf("string2 內容為: %s\n", string2);

    // 3. 存取陣列中的個別字元
    // string1[0] 是 'F'，string1[3] 是 'S'
    printf("string1[0] = %c\n", string1[0]);
    printf("string1[3] = %c\n", string1[3]);

    // 4. 使用 scanf 從鍵盤輸入字串 (注意: 不需要加上 & 符號)
    char inputString[50];
    printf("\n請輸入一個字串 (例如 FIRST): ");
    scanf("%s", inputString);
    
    printf("你輸入的字串為: %s\n", inputString);

    system("pause");
    return 0;
}
