//
// Created by 黎圣  on 2023/9/3.
//
/*
 * 题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
 */
#include "stdio.h"
int main()
{
    char c = getchar();
    int alpha = 0;
    int num = 0;
    int space = 0;
    int others = 0;
    while (c != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            alpha++;
        else if (c >= '0' && c <= '9')
            num++;
        else if (c == ' ')
            space++;
        else
            others++;
        c = getchar();
    }
    printf("字母=%d, 数字=%d, 空格=%d, 其他=%d", alpha, num, space, others);
    return 0;
}
